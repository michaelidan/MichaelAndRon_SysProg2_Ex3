// Emails: ronavraham1999@gmail.com_michael9090124@gmail.com

#pragma once
#include <string>
#include <vector>
#include <memory>
#include <stdexcept>
#include <optional>
#include <unordered_map>

namespace coup {
enum class Action { Gather, Tax, Bribe, Arrest, Sanction, Coup, Invest, Skip };
inline std::string to_string(Action a){
    switch(a){
        case Action::Gather: return "gather"; case Action::Tax: return "tax";
        case Action::Bribe: return "bribe";  case Action::Arrest: return "arrest";
        case Action::Sanction: return "sanction"; case Action::Coup: return "coup";
        case Action::Invest: return "invest"; case Action::Skip: return "skip";
    } return "unknown";
}}
