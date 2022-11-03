#include "Manage_Card.h"

void Manage_Card::addCard()
{
    Card_View view;
    Card_Model model;
    shared_ptr<Card_Control> card = make_shared<Card_Control>(model, view);
    card->inputCard();
    _listCard.insert({card->getCardID(), card});
}

void Manage_Card::deleteByCardID()
{
    string cardID;
    cout << "Enter ID: "; cin.ignore();
    getline(cin, cardID);
    int flag = 0;
    for (auto i = _listCard.begin(); i != _listCard.end(); i++)
    {
        string _cardID = i->second->getCardID();
        if (cardID == _cardID)
        {
            _listCard.erase(i);
            cout << cardID << " deleted." << endl;
            flag++;
            break;
        }
    }
    if (!flag)
    {
        cout << "Not found " << cardID << endl;
    }
}

void Manage_Card::printListCard()
{

    int flag = 0;
    for (auto i = _listCard.begin(); i != _listCard.end(); i++)
    {
        i->second->printCard();
        cout << "\n";
        flag = 1;
    }
    if (!flag)
    {
        cout << "Empty.\n" << endl;
    }
}
