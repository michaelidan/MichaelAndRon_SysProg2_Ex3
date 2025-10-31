// Emails: ronavraham1999@gmail.com_michael9090124@gmail.comlac

#pragma once
#include "Role.hpp"
namespace coup { class Governor: public Role{ public: std::string name() const override { return "Governor"; }
int taxBonus() const override { return 1; } bool canBlockTax() const override { return true; } }; }
