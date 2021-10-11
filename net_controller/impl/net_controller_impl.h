#pragma once

#include <interfaces/net_controller.h>

namespace net_controller
{

class NetControllerImpl : public NetController
{
public:
    virtual NetErrorCode Subscribe(const std::string& topic, const OnSubscribeCb& onSubscribe) override;

    virtual NetErrorCode Unsubscribe(const std::string& topic) override;

    virtual NetErrorCode Publish(const std::string& topic, const std::string& replyTo, const std::string& message) override;
};

} // namespace net_controller
