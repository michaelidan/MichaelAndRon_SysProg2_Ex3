// Emails: ronavraham1999@gmail.com_michael9090124@gmail.comlac

#pragma once
#include "Role.hpp"
namespace coup { class Judge: public Role{ public: std::string name() const override { return "Judge"; }
bool canBlockBribe() const override { return true; } }; }
