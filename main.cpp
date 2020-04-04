#include <iostream>
#include "Contributor.h"
#include "Contribution.h"

using namespace std;

int main() {
    Contribution::setFirstPercent(10);
    Contribution::setSecondPercent(20);
    Contribution::setThirdPercent(40);
    Contribution::setFourthPercent(80);
    
    Contributor contributor(500);
    contributor.openFirstContribution(10);
    cout << contributor.getEndBalance();
}
