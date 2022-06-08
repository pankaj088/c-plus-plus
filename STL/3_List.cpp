#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // list of 0 length
    list1.push_back(5);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);

    list1.remove(6); // yai bich sai 6 balai element ko hata dega
    display(list1);

    list1.pop_front(); // yai front sai element ko nikal dega
    display(list1);

    list1.pop_back(); // yai Back yani pichai sai ak element ko delet kar dega
    display(list1);

    list<int> list2(3); // empty list of size 3
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 50;
    iter++;
    *iter = 60;
    iter++;
    *iter = 70;
    iter++;
    display(list2);

    // sorting the list
    list1.sort(); // yai list1 ko sort kar dega
    display(list1);

    // merging the list
    list1.merge(list2);
    cout << "list 1 after merging ";
    display(list1);

    // Reverse the list
    list1.reverse();
    display(list1);

    //  list<int> :: iterator iter;
    //  iter = list1.begin();   // yai iterator elements kai pahlai element ko point kariga

    //  cout<< *iter<<" pahla element print hoga "<<endl;
    //  iter++;
    //  cout<< *iter<<" dusra element"<<endl;
    //  iter++;
    //  cout<< *iter<<" jitna chao utna print karo "<<endl;

    return 0;
}