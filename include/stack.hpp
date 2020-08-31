#pragma once


class Stack
{
    struct Link
    {
        void *data;
        Link *next;
        Link(void *_data, Link *_next);
        ~Link();
    };

    Link *head;

public:
    Stack();
    ~Stack();
    void push(void *_data);
    void *peek();
    void *pop();
};
