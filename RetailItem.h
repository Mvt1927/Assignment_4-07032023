#include "string"

using namespace std;

class RetailItem
{
private:

    /**
     * @brief A string that holds a brief description of the item
     * 
     */
    string description;

    /**
     * @brief An int that holds the number of units currently in inventory
     * 
     */
    int unitsOnHand;

    /**
     * @brief A double that holds the item’s retail price
     * 
     */
    double price;
public:
    RetailItem(/* args */);
    ~RetailItem();
};

RetailItem::RetailItem(/* args */)
{
}

RetailItem::~RetailItem()
{
}
