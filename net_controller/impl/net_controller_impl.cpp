#include <impl/net_controller_impl.h>

#include <stdexcept>

namespace net_controller
{

NetControllerImpl::NetControllerImpl(const NetType netType)
    : netType_{netType}
{

}

NetErrorCode NetControllerImpl::SendMessage(
    const std::string& topic,
    const std::string& replyTo,
    const std::string& message,
    const OnMessageCb& onMessageCb)
{
    switch (netType_)
    {
    case NetType::NATS:
        return nats(topic, replyTo, message, onMessageCb);

    default:
        throw std::runtime_error("Unknon net type");
    }
}

NetErrorCode NetControllerImpl::nats(
    const std::string& topic,
    const std::string& replyTo,
    const std::string& message,
    const OnMessageCb& onMessageCb)
{
    (void)topic;
    (void)replyTo;
    (void)message;
    (void)onMessageCb;

    return NetErrorCode::OK;
}

} // namespace net_controller
