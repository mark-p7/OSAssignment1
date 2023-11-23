
#ifndef OSASSIGNMENT1_FIXED_POINT_H
#define OSASSIGNMENT1_FIXED_POINT_H

#define P 17 //bits to the left of decimal point
#define Q 14 //bits to the right of the decimal point
#define Q_BIT_SHIFT 1<<(Q)

#define FP_INT_ADD(x, n) (x) + (n) * (Q_BIT_SHIFT)
#define FP_INT_SUBTRACT(x, n) (x) - (n) * (Q_BIT_SHIFT)
#define CONVERT_TO_FP(x) (x) * (Q_BIT_SHIFT)
#define TRUNCATE_FP(x) (x) / (Q_BIT_SHIFT)
#define ROUND_TO_INT(x) ((x) >= 0 ? ((x) + (Q_BIT_SHIFT) / 2) / (Q_BIT_SHIFT) : ((x) - (Q_BIT_SHIFT) / 2) / (Q_BIT_SHIFT))
#define FP_MUL(x, y) ((int64_t)(x)) * (y) / (Q_BIT_SHIFT)
#define FP_DIV(x, y) ((int64_t)(x)) * (Q_BIT_SHIFT) / (y)

#endif //OSASSIGNMENT1_FIXED_POINT_H
