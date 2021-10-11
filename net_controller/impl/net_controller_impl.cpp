#include <impl/net_controller_impl.h>

namespace net_controller
{

NetErrorCode NetControllerImpl::Subscribe(const std::string& topic, const OnSubscribeCb& onSubscribe)
{
    (void)topic;
    (void)onSubscribe;

    return NetErrorCode::OK;
}

NetErrorCode NetControllerImpl::Unsubscribe(const std::string& topic)
{
    (void)topic;

    return NetErrorCode::OK;
}

NetErrorCode NetControllerImpl::Publish(const std::string& topic, const std::string& replyTo, const std::string& message)
{
    (void)topic;
    (void)replyTo;
    (void)message;

    return NetErrorCode::OK;
}

} // namespace net_controller
