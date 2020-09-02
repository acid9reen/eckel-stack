#pragma once

#include<iostream>

class Stack
{
    struct Link
    {
        void *data;
        Link *next;
        inline Link(void *_data, Link *_next): 
            data(_data), next(_next){};
    };

    Link *head;

public:
    inline Stack() : head(0){};
    inline ~Stack()
    {
        if(head != 0)
        std::cout << "Stack is not empty" << std::endl;
    };

    inline void push(void *_data)
    {
        head = new Link(_data, head);
    };

    inline void *peek() const 
    {
        return head ? head->data : 0;
    };
    inline void *pop()
    {
        if(head == 0)
        return 0;

        void *result = head->data;
        Link *old_head = head;
        head = head->next;
        delete old_head;

        return result;
    };
};
