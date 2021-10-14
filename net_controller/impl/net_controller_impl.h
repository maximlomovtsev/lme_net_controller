#pragma once

#include <interfaces/net_controller.h>
#include <model/net_type.h>

namespace net_controller
{

class NetControllerImpl : public NetController
{
public:
    NetControllerImpl(const NetType netType);

    virtual NetErrorCode Send(
        const std::string& topic,
        const std::string& replyTo,
        const std::string& message,
        const OnMessageCb& onMessageCb) override;

private:
    NetErrorCode nats(
        const std::string& topic,
        const std::string& replyTo,
        const std::string& message,
        const OnMessageCb& onMessageCb
    );

private:
    NetType netType_;
};

} // namespace net_controller
