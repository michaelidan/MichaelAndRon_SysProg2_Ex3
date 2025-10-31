// Emails: ronavraham1999@gmail.com_michael9090124@gmail.comlac

#pragma once
#include <string>
namespace coup { class Player; class Game;
class Role { public: virtual ~Role() = default; virtual std::string name() const = 0;
    virtual int taxBonus() const { return 0; }
    virtual bool canBlockTax()   const { return false; }
    virtual bool canBlockBribe() const { return false; }
    virtual bool canBlockCoup()  const { return false; }
    virtual void onArrestedAsTarget(Player&, Player&, Game&) {}
}; }
