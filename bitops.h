#ifndef BITOPS_H
#define BITOPS_H 1

#define BITS_PER_LONG (sizeof(unsigned long) * 8)

#define test_bit(i,p)  ((p)[(i) / sizeof(unsigned long)] &   (1UL << ((i)%BITS_PER_LONG)))
#define set_bit(i,p)   ((p)[(i) / sizeof(unsigned long)] |=  (1UL << ((i)%BITS_PER_LONG)))
#define clear_bit(i,p) ((p)[(i) / sizeof(unsigned long)] &= ~(1UL << ((i)%BITS_PER_LONG)))

extern int find_first_bit(void *mask, int max);

#endif
