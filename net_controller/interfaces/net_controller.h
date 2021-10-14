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

using OnMessageCb = std::function<void(const std::string&)>;

struct NetController
{
    virtual ~NetController() = 0;

    virtual NetErrorCode Send(
        const std::string& topic,
        const std::string& replyTo,
        const std::string& message,
        const OnMessageCb& onMessageCb) = 0;
};

} // namespace net_controller
