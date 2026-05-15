
#include <iostream>
#include <list>
#include "MyList.h"
int main()
{
    //Node<int> first(2);
    //Node<int> second(6);
    //first.next = &second;
    //Node<int> third(8);
    //second.next = &third;
    //Node<int> fourth(4);
    //third.next = &fourth;

    ////Обхід по списку
    //Node<int>* p = &first;
    //while (p != nullptr)
    //{
    //    p->show();
    //    p = p->next;
    //}


    //DList<int>nums;
    //nums.push_back(6);
    //nums.push_back(4);
    //nums.push_back(8);
    //nums.push_back(2);

    //


    //nums.show();
    //nums.show_reverse();











    DList<int>nums;
    nums.push_back(6);
    nums.push_back(4);
    nums.push_back(8);
    nums.push_back(4);

    //std::list<int>::iterator p;
    //std::list<int>::iterator pdel;
    //for (p = nums.begin(); p != nums.end(); )
    //{
    //    pdel = p;
    //    p++;
    //    if (*pdel == 4)
    //    {
    //        cout << "DELETE: " << *pdel << " ";
    //        nums.erase(pdel);
    //    }
    //   
    //}
    //cout << endl;

    

    nums.push_front(1);
    
    nums.show();
    
    nums.insertAfter(4, 25);
    nums.show();
    nums.insertBefore(8, 11);
    nums.show();
    nums.erase(25);
    nums.show();

    return 0;
}
