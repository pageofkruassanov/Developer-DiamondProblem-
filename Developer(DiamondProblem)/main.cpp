#include <iostream>
#include "BackendDeveloper.h"
#include "FrontendDeveloper.h"
#include "Developer.h"
#include "FullstackDeveloper.h"

int main()
{
    FullstackDeveloper dev("John", "Middle");
    cout << "Name developer: " << dev.getName() << endl;
    cout << "Rank developer: " << dev.getRank() << endl;
    dev.startWork();
    dev.finishWork();
}
