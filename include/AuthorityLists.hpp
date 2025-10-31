// Emails: ronavraham1999@gmail.com_michael9090124@gmail.comlac

#pragma once
#include <vector>
namespace coup { class Player;
struct AuthorityLists { std::vector<Player*> governors, judges, generals; void clear(){ governors.clear(); judges.clear(); generals.clear(); } };
}
