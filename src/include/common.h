/*
 * @Description: 
 * @LastEditors: hsjfans
 * @Email: hsjfans.scholar@gmail.com
 * @Date: 2019-02-28 14:40:32
 * @LastEditTime: 2019-04-09 11:42:20
 */
#ifndef DATA_STRUCTURE_COMMON_H
#define DATA_STRUCTURE_COMMON_H

// array and linked list init config
#define LIST_INIT_CAPACITY 10 // 默认初始容器是 10


// define the boolean
typedef unsigned int boolean;

/**
 * A value to be sotred here;
 * */
typedef void *Element;

/**
 * @description: compare template ; and support to self-define
 * @param {type} 
 * @return: 
 */
typedef int (*compare_func)(const Element e1, const Element e2);
// compara values
int common_cmp_str(const Element key1, const Element key2);
int common_cmp_ptr(const Element key1, const Element key2);
void swap(Element *e1, Element *e2);

#define COMMON_CMP_STR common_cmp_str;
#define COMMON_CMP_PTR common_cmp_ptr;
#define Swap swap;

#endif //DATA_STRUCTURE_COMMON_H
