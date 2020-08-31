#pragma once


class Stack
{
    struct Link
    {
        void *data;
        Link *next;
        void initialize(void *_data, Link *_next);
    };

    Link *head;

public:
    void initialize();
    void push(void *_data);
    void *peek();
    void *pop();
    void cleanup();
};
