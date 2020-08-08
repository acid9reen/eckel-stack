#include "stack.hpp"
#include <iostream>

void Stack::Link::initialize(void *_data, Link *_next)
{
    data = _data;
    next = _next;
}

void Stack::initialize()
{
    head = 0;
}

void Stack::push(void *_data)
{
    Link *new_link = new Link;
    new_link->initialize(_data, head);
    head = new_link;
}

void *Stack::peek()
{
    if(head != 0)
        return head->data;
    
    std::cout << "Stack is empty" << std::endl;
    return 0;
}

void *Stack::pop()
{
    if(head == 0)
        return 0;

    void *result = head->data;
    Link *old_head = head;
    head = head->next;
    delete old_head;

    return result;
}

void Stack::cleanup()
{
    if(head != 0)
        std::cout << "Stack is not empty" << std::endl;
}
