#pragma once

#include <string>
#include <functional>

namespace net_controller
{

enum class NetErrorCode
{
    OK = 0,
    Fail
};

using OnSubscribeCb = std::function<void(const std::string&)>;

struct NetController
{
    virtual ~NetController() = 0;

    virtual NetErrorCode Subscribe(const std::string& topic, const OnSubscribeCb& onSubscribe) = 0;

    virtual NetErrorCode Unsubscribe(const std::string& topic) = 0;

    virtual NetErrorCode Publish(const std::string& topic, const std::string& replyTo, const std::string& message) = 0;
};

} // namespace net_controller
