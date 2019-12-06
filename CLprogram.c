// --atomics 74 ---emi -g 67,36,4 -l 1,3,4
#define int64_t long
#define uint64_t ulong
#define int_least64_t long
#define uint_least64_t ulong
#define int_fast64_t long
#define uint_fast64_t ulong
#define intmax_t long
#define uintmax_t ulong
#define int32_t int
#define uint32_t uint
#define int16_t short
#define uint16_t ushort
#define int8_t char
#define uint8_t uchar

#define INT64_MIN LONG_MIN
#define INT64_MAX LONG_MAX
#define INT32_MIN INT_MIN
#define INT32_MAX INT_MAX
#define INT16_MIN SHRT_MIN
#define INT16_MAX SHRT_MAX
#define INT8_MIN CHAR_MIN
#define INT8_MAX CHAR_MAX
#define UINT64_MIN ULONG_MIN
#define UINT64_MAX ULONG_MAX
#define UINT32_MIN UINT_MIN
#define UINT32_MAX UINT_MAX
#define UINT16_MIN USHRT_MIN
#define UINT16_MAX USHRT_MAX
#define UINT8_MIN UCHAR_MIN
#define UINT8_MAX UCHAR_MAX

#define transparent_crc(X, Y, Z) transparent_crc_(&crc64_context, X, Y, Z)

#define VECTOR(X , Y) VECTOR_(X, Y)
#define VECTOR_(X, Y) X##Y

#ifndef NO_GROUP_DIVERGENCE
#define GROUP_DIVERGE(x, y) get_group_id(x)
#else
#define GROUP_DIVERGE(x, y) (y)
#endif

#ifndef NO_FAKE_DIVERGENCE
#define FAKE_DIVERGE(x, y, z) (x - y)
#else
#define FAKE_DIVERGE(x, y, z) (z)
#endif


// Seed: 555861117

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   uint32_t  f1;
};

union U2 {
   int16_t  f0;
};

struct S3 {
    int8_t g_7;
    int8_t *g_9;
    int32_t g_24;
    int32_t g_72[6];
    int32_t g_92;
    int32_t *g_91[4][5][10];
    union U0 g_101[6][8][2];
    uint16_t g_130;
    uint64_t g_132;
    int16_t g_134;
    int32_t g_135;
    int32_t g_136;
    union U2 g_138;
    uint64_t * volatile g_141;
    uint64_t * volatile * volatile g_140;
    uint64_t * volatile * volatile * volatile g_142;
    int32_t * volatile g_151;
    int32_t *g_154;
    int32_t ** volatile g_155;
    int16_t g_250;
    __local volatile uint32_t *l_atomic_input;
    __local volatile uint32_t *l_special_values;
    __global int32_t *emi_input;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S3 * p_252);
uint8_t  func_4(int8_t * p_5, struct S3 * p_252);
int32_t * func_12(int64_t  p_13, uint16_t  p_14, struct S3 * p_252);
int32_t  func_25(int8_t * p_26, int32_t  p_27, int8_t ** p_28, uint32_t  p_29, struct S3 * p_252);
uint64_t  func_33(uint32_t  p_34, int8_t * p_35, int32_t  p_36, union U2  p_37, int8_t * p_38, struct S3 * p_252);
uint32_t  func_39(int8_t ** p_40, int32_t * p_41, int64_t  p_42, uint16_t  p_43, int8_t * p_44, struct S3 * p_252);
int32_t * func_45(int8_t  p_46, int32_t  p_47, int8_t * p_48, int32_t * p_49, int16_t  p_50, struct S3 * p_252);
uint64_t  func_53(int32_t * p_54, int8_t ** p_55, int8_t * p_56, struct S3 * p_252);
int32_t * func_57(uint64_t  p_58, union U0  p_59, uint16_t  p_60, struct S3 * p_252);
int8_t ** func_66(union U0  p_67, int64_t  p_68, uint32_t  p_69, int64_t  p_70, struct S3 * p_252);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_252->g_7 p_252->g_24 p_252->g_9 p_252->g_91 p_252->g_92 p_252->g_130 p_252->g_132 p_252->g_134 p_252->g_138 p_252->g_140 p_252->g_151 p_252->g_154 p_252->g_155 p_252->g_250
 * writes: p_252->g_9 p_252->g_7 p_252->g_24 p_252->g_72 p_252->g_101 p_252->g_130 p_252->g_132 p_252->g_134 p_252->g_135 p_252->g_136 p_252->g_154
 */
uint32_t  func_1(struct S3 * p_252)
{ /* block id: 4 */
    int8_t *l_6 = &p_252->g_7;
    int8_t **l_8[7][2][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int16_t l_251 = 0x1CFCL;
    int i, j, k;
    l_251 ^= (safe_lshift_func_uint8_t_u_u(func_4((p_252->g_9 = l_6), p_252), (1L != p_252->g_250)));
    return p_252->g_7;
}


/* ------------------------------------------ */
/* 
 * reads : p_252->g_7 p_252->g_24 p_252->g_9 p_252->g_91 p_252->g_92 p_252->g_130 p_252->g_132 p_252->g_134 p_252->g_138 p_252->g_140 p_252->g_151 p_252->g_154 p_252->g_155
 * writes: p_252->g_7 p_252->g_24 p_252->g_72 p_252->g_101 p_252->g_130 p_252->g_132 p_252->g_134 p_252->g_135 p_252->g_136 p_252->g_154
 */
uint8_t  func_4(int8_t * p_5, struct S3 * p_252)
{ /* block id: 6 */
    int64_t l_22 = 1L;
    for (p_252->g_7 = 0; (p_252->g_7 < 0); p_252->g_7 = safe_add_func_int64_t_s_s(p_252->g_7, 1))
    { /* block id: 9 */
        union U2 l_21 = {-5L};
        (*p_252->g_155) = func_12((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_add_func_int64_t_s_s((l_21 , p_252->g_7), 3L)), l_22)), 0x5004L)), p_252->g_7, p_252);
        if ((atomic_inc(&p_252->l_atomic_input[20]) == 2))
        { /* block id: 64 */
            uint8_t l_156 = 0xD1L;
            int8_t l_157[4][4][10] = {{{0x6FL,0x2EL,0x5DL,(-10L),0x67L,0x3DL,0x13L,0x37L,0x1EL,(-1L)},{0x6FL,0x2EL,0x5DL,(-10L),0x67L,0x3DL,0x13L,0x37L,0x1EL,(-1L)},{0x6FL,0x2EL,0x5DL,(-10L),0x67L,0x3DL,0x13L,0x37L,0x1EL,(-1L)},{0x6FL,0x2EL,0x5DL,(-10L),0x67L,0x3DL,0x13L,0x37L,0x1EL,(-1L)}},{{0x6FL,0x2EL,0x5DL,(-10L),0x67L,0x3DL,0x13L,0x37L,0x1EL,(-1L)},{0x6FL,0x2EL,0x5DL,(-10L),0x67L,0x3DL,0x13L,0x37L,0x1EL,(-1L)},{0x6FL,0x2EL,0x5DL,(-10L),0x67L,0x3DL,0x13L,0x37L,0x1EL,(-1L)},{0x6FL,0x2EL,0x5DL,(-10L),0x67L,0x3DL,0x13L,0x37L,0x1EL,(-1L)}},{{0x6FL,0x2EL,0x5DL,(-10L),0x67L,0x3DL,0x13L,0x37L,0x1EL,(-1L)},{0x6FL,0x2EL,0x5DL,(-10L),0x67L,0x3DL,0x13L,0x37L,0x1EL,(-1L)},{0x6FL,0x2EL,0x5DL,(-10L),0x67L,0x3DL,0x13L,0x37L,0x1EL,(-1L)},{0x6FL,0x2EL,0x5DL,(-10L),0x67L,0x3DL,0x13L,0x37L,0x1EL,(-1L)}},{{0x6FL,0x2EL,0x5DL,(-10L),0x67L,0x3DL,0x13L,0x37L,0x1EL,(-1L)},{0x6FL,0x2EL,0x5DL,(-10L),0x67L,0x3DL,0x13L,0x37L,0x1EL,(-1L)},{0x6FL,0x2EL,0x5DL,(-10L),0x67L,0x3DL,0x13L,0x37L,0x1EL,(-1L)},{0x6FL,0x2EL,0x5DL,(-10L),0x67L,0x3DL,0x13L,0x37L,0x1EL,(-1L)}}};
            uint8_t l_158 = 6UL;
            int64_t l_159 = 0x61AD35146581DE73L;
            union U0 l_160 = {1L};
            union U0 l_161 = {0x5FFFDE4EL};
            union U0 l_162 = {-1L};
            union U0 l_163[7][5][7] = {{{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}}},{{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}}},{{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}}},{{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}}},{{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}}},{{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}}},{{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}},{{-1L},{0x7B34B950L},{0x70DDD112L},{0x7B34B950L},{-1L},{-1L},{0x7B34B950L}}}};
            union U0 l_164[7] = {{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}};
            uint32_t l_165 = 0xF3D50A5CL;
            uint32_t l_166 = 0UL;
            uint16_t l_167[8];
            int i, j, k;
            for (i = 0; i < 8; i++)
                l_167[i] = 0x0703L;
            if ((l_167[2] = ((l_157[2][0][7] = l_156) , ((((l_162 = (l_161 = (l_160 = ((l_158 , 0UL) , (l_159 , l_160))))) , (l_164[3] = (l_162 = l_163[3][0][5]))) , l_165) , l_166))))
            { /* block id: 72 */
                int32_t l_169 = (-1L);
                int32_t *l_168 = &l_169;
                int32_t *l_170 = &l_169;
                l_170 = l_168;
                for (l_169 = 4; (l_169 >= 0); l_169 -= 1)
                { /* block id: 76 */
                    uint64_t l_171 = 2UL;
                    int8_t l_172 = 0x6EL;
                    uint32_t l_173 = 0x08463D82L;
                    uint16_t l_174 = 0xCC20L;
                    int32_t l_175 = (-8L);
                    l_174 = (l_173 |= (l_172 ^= l_171));
                    l_170 = (l_168 = (void*)0);
                    l_175 = 0x2BCC5766L;
                    for (l_172 = 1; (l_172 >= 0); l_172 -= 1)
                    { /* block id: 85 */
                        int64_t l_176 = (-9L);
                        uint32_t l_177 = 4294967289UL;
                        uint16_t l_178 = 0UL;
                        uint8_t l_179[5][9] = {{0x3DL,0x6CL,0x3DL,0x3DL,0x6CL,0x3DL,0x3DL,0x6CL,0x3DL},{0x3DL,0x6CL,0x3DL,0x3DL,0x6CL,0x3DL,0x3DL,0x6CL,0x3DL},{0x3DL,0x6CL,0x3DL,0x3DL,0x6CL,0x3DL,0x3DL,0x6CL,0x3DL},{0x3DL,0x6CL,0x3DL,0x3DL,0x6CL,0x3DL,0x3DL,0x6CL,0x3DL},{0x3DL,0x6CL,0x3DL,0x3DL,0x6CL,0x3DL,0x3DL,0x6CL,0x3DL}};
                        int32_t l_180[10][3][8] = {{{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L},{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L},{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L}},{{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L},{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L},{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L}},{{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L},{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L},{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L}},{{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L},{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L},{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L}},{{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L},{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L},{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L}},{{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L},{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L},{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L}},{{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L},{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L},{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L}},{{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L},{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L},{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L}},{{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L},{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L},{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L}},{{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L},{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L},{1L,0x2A23C349L,(-1L),0x2AF8453BL,0x375B1A38L,0x10BCB708L,0x4575CA1BL,0x4D1A0305L}}};
                        uint32_t l_181 = 0x768C82B8L;
                        uint64_t l_182 = 0x710D7219D6A0E191L;
                        int i, j, k;
                        l_175 = l_176;
                        l_179[2][3] = (l_178 = l_177);
                        l_175 = l_180[1][2][4];
                        l_182 = l_181;
                    }
                }
                for (l_169 = 0; (l_169 < (-3)); l_169 = safe_sub_func_int8_t_s_s(l_169, 2))
                { /* block id: 95 */
                    int32_t l_185[9] = {0x1321D68BL,0x07CD17B0L,0x1321D68BL,0x1321D68BL,0x07CD17B0L,0x1321D68BL,0x1321D68BL,0x07CD17B0L,0x1321D68BL};
                    int8_t l_209 = 0x3EL;
                    uint32_t l_210[5] = {6UL,6UL,6UL,6UL,6UL};
                    int i;
                    for (l_185[6] = (-6); (l_185[6] == 22); l_185[6] = safe_add_func_int8_t_s_s(l_185[6], 1))
                    { /* block id: 98 */
                        uint32_t l_188[2];
                        int32_t l_190 = (-7L);
                        int32_t *l_189 = &l_190;
                        uint32_t l_191 = 0xE500268CL;
                        union U2 l_192 = {0x5DD4L};
                        union U2 l_193 = {0x490CL};
                        uint16_t l_194[8][9] = {{0xEC2BL,1UL,0UL,3UL,65535UL,0xC46FL,0xEC2BL,0x6B5AL,0UL},{0xEC2BL,1UL,0UL,3UL,65535UL,0xC46FL,0xEC2BL,0x6B5AL,0UL},{0xEC2BL,1UL,0UL,3UL,65535UL,0xC46FL,0xEC2BL,0x6B5AL,0UL},{0xEC2BL,1UL,0UL,3UL,65535UL,0xC46FL,0xEC2BL,0x6B5AL,0UL},{0xEC2BL,1UL,0UL,3UL,65535UL,0xC46FL,0xEC2BL,0x6B5AL,0UL},{0xEC2BL,1UL,0UL,3UL,65535UL,0xC46FL,0xEC2BL,0x6B5AL,0UL},{0xEC2BL,1UL,0UL,3UL,65535UL,0xC46FL,0xEC2BL,0x6B5AL,0UL},{0xEC2BL,1UL,0UL,3UL,65535UL,0xC46FL,0xEC2BL,0x6B5AL,0UL}};
                        int16_t l_195[3];
                        uint8_t l_196 = 0x74L;
                        uint8_t l_197 = 8UL;
                        int16_t l_198 = 0x5FC8L;
                        int16_t l_199 = 0L;
                        int64_t l_200[9][1] = {{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)}};
                        int64_t l_201 = 0x539DDD20A629C30AL;
                        uint8_t l_202 = 0xD1L;
                        uint8_t l_205 = 0x60L;
                        uint64_t l_206 = 18446744073709551608UL;
                        uint32_t l_207 = 4294967291UL;
                        uint64_t l_208 = 18446744073709551613UL;
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_188[i] = 4294967295UL;
                        for (i = 0; i < 3; i++)
                            l_195[i] = 0x72D1L;
                        l_168 = (l_188[0] , l_189);
                        l_199 &= ((l_191 , ((l_193 = l_192) , ((l_194[5][1] , (l_195[1] , l_196)) , l_197))) , l_198);
                        ++l_202;
                        l_208 |= ((*l_168) = (l_205 , (l_206 , l_207)));
                    }
                    l_210[0]--;
                    for (l_185[6] = 4; (l_185[6] >= 0); l_185[6] -= 1)
                    { /* block id: 109 */
                        uint16_t l_213[9][6][2] = {{{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL}},{{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL}},{{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL}},{{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL}},{{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL}},{{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL}},{{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL}},{{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL}},{{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL},{65535UL,3UL}}};
                        uint64_t l_214 = 0x851A1F8846DAF4CEL;
                        int64_t l_215 = 1L;
                        int8_t l_216[8][2][5] = {{{0L,(-1L),2L,0x66L,2L},{0L,(-1L),2L,0x66L,2L}},{{0L,(-1L),2L,0x66L,2L},{0L,(-1L),2L,0x66L,2L}},{{0L,(-1L),2L,0x66L,2L},{0L,(-1L),2L,0x66L,2L}},{{0L,(-1L),2L,0x66L,2L},{0L,(-1L),2L,0x66L,2L}},{{0L,(-1L),2L,0x66L,2L},{0L,(-1L),2L,0x66L,2L}},{{0L,(-1L),2L,0x66L,2L},{0L,(-1L),2L,0x66L,2L}},{{0L,(-1L),2L,0x66L,2L},{0L,(-1L),2L,0x66L,2L}},{{0L,(-1L),2L,0x66L,2L},{0L,(-1L),2L,0x66L,2L}}};
                        uint32_t l_217 = 0UL;
                        uint64_t l_218 = 0x972D8468F63977B6L;
                        uint8_t l_219[6][3][6] = {{{0x73L,0xC1L,1UL,0xE1L,0UL,1UL},{0x73L,0xC1L,1UL,0xE1L,0UL,1UL},{0x73L,0xC1L,1UL,0xE1L,0UL,1UL}},{{0x73L,0xC1L,1UL,0xE1L,0UL,1UL},{0x73L,0xC1L,1UL,0xE1L,0UL,1UL},{0x73L,0xC1L,1UL,0xE1L,0UL,1UL}},{{0x73L,0xC1L,1UL,0xE1L,0UL,1UL},{0x73L,0xC1L,1UL,0xE1L,0UL,1UL},{0x73L,0xC1L,1UL,0xE1L,0UL,1UL}},{{0x73L,0xC1L,1UL,0xE1L,0UL,1UL},{0x73L,0xC1L,1UL,0xE1L,0UL,1UL},{0x73L,0xC1L,1UL,0xE1L,0UL,1UL}},{{0x73L,0xC1L,1UL,0xE1L,0UL,1UL},{0x73L,0xC1L,1UL,0xE1L,0UL,1UL},{0x73L,0xC1L,1UL,0xE1L,0UL,1UL}},{{0x73L,0xC1L,1UL,0xE1L,0UL,1UL},{0x73L,0xC1L,1UL,0xE1L,0UL,1UL},{0x73L,0xC1L,1UL,0xE1L,0UL,1UL}}};
                        int i, j, k;
                        l_219[4][0][0] &= ((l_217 = ((l_162 = l_164[(l_185[6] + 1)]) , (l_213[3][0][1] , ((l_214 , l_215) , l_216[1][1][1])))) , l_218);
                    }
                }
            }
            else
            { /* block id: 115 */
                uint8_t l_220 = 0x16L;
                uint64_t l_221[3][6][8] = {{{18446744073709551615UL,18446744073709551610UL,0x067DC141A6AB78B7L,1UL,0UL,18446744073709551607UL,0UL,0xBA008372FF3A9094L},{18446744073709551615UL,18446744073709551610UL,0x067DC141A6AB78B7L,1UL,0UL,18446744073709551607UL,0UL,0xBA008372FF3A9094L},{18446744073709551615UL,18446744073709551610UL,0x067DC141A6AB78B7L,1UL,0UL,18446744073709551607UL,0UL,0xBA008372FF3A9094L},{18446744073709551615UL,18446744073709551610UL,0x067DC141A6AB78B7L,1UL,0UL,18446744073709551607UL,0UL,0xBA008372FF3A9094L},{18446744073709551615UL,18446744073709551610UL,0x067DC141A6AB78B7L,1UL,0UL,18446744073709551607UL,0UL,0xBA008372FF3A9094L},{18446744073709551615UL,18446744073709551610UL,0x067DC141A6AB78B7L,1UL,0UL,18446744073709551607UL,0UL,0xBA008372FF3A9094L}},{{18446744073709551615UL,18446744073709551610UL,0x067DC141A6AB78B7L,1UL,0UL,18446744073709551607UL,0UL,0xBA008372FF3A9094L},{18446744073709551615UL,18446744073709551610UL,0x067DC141A6AB78B7L,1UL,0UL,18446744073709551607UL,0UL,0xBA008372FF3A9094L},{18446744073709551615UL,18446744073709551610UL,0x067DC141A6AB78B7L,1UL,0UL,18446744073709551607UL,0UL,0xBA008372FF3A9094L},{18446744073709551615UL,18446744073709551610UL,0x067DC141A6AB78B7L,1UL,0UL,18446744073709551607UL,0UL,0xBA008372FF3A9094L},{18446744073709551615UL,18446744073709551610UL,0x067DC141A6AB78B7L,1UL,0UL,18446744073709551607UL,0UL,0xBA008372FF3A9094L},{18446744073709551615UL,18446744073709551610UL,0x067DC141A6AB78B7L,1UL,0UL,18446744073709551607UL,0UL,0xBA008372FF3A9094L}},{{18446744073709551615UL,18446744073709551610UL,0x067DC141A6AB78B7L,1UL,0UL,18446744073709551607UL,0UL,0xBA008372FF3A9094L},{18446744073709551615UL,18446744073709551610UL,0x067DC141A6AB78B7L,1UL,0UL,18446744073709551607UL,0UL,0xBA008372FF3A9094L},{18446744073709551615UL,18446744073709551610UL,0x067DC141A6AB78B7L,1UL,0UL,18446744073709551607UL,0UL,0xBA008372FF3A9094L},{18446744073709551615UL,18446744073709551610UL,0x067DC141A6AB78B7L,1UL,0UL,18446744073709551607UL,0UL,0xBA008372FF3A9094L},{18446744073709551615UL,18446744073709551610UL,0x067DC141A6AB78B7L,1UL,0UL,18446744073709551607UL,0UL,0xBA008372FF3A9094L},{18446744073709551615UL,18446744073709551610UL,0x067DC141A6AB78B7L,1UL,0UL,18446744073709551607UL,0UL,0xBA008372FF3A9094L}}};
                int32_t l_222[7][2] = {{(-4L),(-4L)},{(-4L),(-4L)},{(-4L),(-4L)},{(-4L),(-4L)},{(-4L),(-4L)},{(-4L),(-4L)},{(-4L),(-4L)}};
                int16_t l_223[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int i, j, k;
                if ((l_223[3] = (l_220 , (l_222[5][0] = l_221[2][5][3]))))
                { /* block id: 118 */
                    l_222[5][0] |= (-9L);
                }
                else
                { /* block id: 120 */
                    int8_t l_224 = 0L;
                    uint32_t l_225 = 0x9B41F01BL;
                    int32_t l_226 = 0x2205FF7CL;
                    int32_t l_227 = 9L;
                    uint8_t l_228 = 0x63L;
                    l_226 = (l_225 ^= l_224);
                    --l_228;
                }
            }
            for (l_167[2] = 0; (l_167[2] <= 13); l_167[2] = safe_add_func_uint16_t_u_u(l_167[2], 1))
            { /* block id: 128 */
                int32_t l_233 = (-1L);
                uint16_t l_247 = 4UL;
                for (l_233 = 21; (l_233 == 5); l_233--)
                { /* block id: 131 */
                    int16_t l_236 = (-1L);
                    uint16_t l_237[2][5] = {{0xB342L,0xB342L,0xB342L,0xB342L,0xB342L},{0xB342L,0xB342L,0xB342L,0xB342L,0xB342L}};
                    uint32_t l_244 = 0xFE2CFEDFL;
                    int i, j;
                    l_237[0][4] &= l_236;
                    for (l_237[1][3] = (-16); (l_237[1][3] != 60); ++l_237[1][3])
                    { /* block id: 135 */
                        uint32_t l_240 = 3UL;
                        uint64_t l_241[2][3];
                        int64_t l_242 = (-1L);
                        int8_t l_243 = 0x13L;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_241[i][j] = 1UL;
                        }
                        l_243 ^= (l_242 &= (l_241[0][0] = l_240));
                    }
                    l_244--;
                }
                l_247--;
            }
            unsigned int result = 0;
            result += l_156;
            int l_157_i0, l_157_i1, l_157_i2;
            for (l_157_i0 = 0; l_157_i0 < 4; l_157_i0++) {
                for (l_157_i1 = 0; l_157_i1 < 4; l_157_i1++) {
                    for (l_157_i2 = 0; l_157_i2 < 10; l_157_i2++) {
                        result += l_157[l_157_i0][l_157_i1][l_157_i2];
                    }
                }
            }
            result += l_158;
            result += l_159;
            result += l_160.f0;
            result += l_160.f1;
            result += l_161.f0;
            result += l_161.f1;
            result += l_162.f0;
            result += l_162.f1;
            int l_163_i0, l_163_i1, l_163_i2;
            for (l_163_i0 = 0; l_163_i0 < 7; l_163_i0++) {
                for (l_163_i1 = 0; l_163_i1 < 5; l_163_i1++) {
                    for (l_163_i2 = 0; l_163_i2 < 7; l_163_i2++) {
                        result += l_163[l_163_i0][l_163_i1][l_163_i2].f0;
                        result += l_163[l_163_i0][l_163_i1][l_163_i2].f1;
                    }
                }
            }
            int l_164_i0;
            for (l_164_i0 = 0; l_164_i0 < 7; l_164_i0++) {
                result += l_164[l_164_i0].f0;
                result += l_164[l_164_i0].f1;
            }
            result += l_165;
            result += l_166;
            int l_167_i0;
            for (l_167_i0 = 0; l_167_i0 < 8; l_167_i0++) {
                result += l_167[l_167_i0];
            }
            atomic_add(&p_252->l_special_values[20], result);
        }
        else
        { /* block id: 144 */
            (1 + 1);
        }
    }
    return l_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_252->g_24 p_252->g_7 p_252->g_9 p_252->g_91 p_252->g_92 p_252->g_130 p_252->g_132 p_252->g_134 p_252->g_138 p_252->g_140 p_252->g_151 p_252->g_154
 * writes: p_252->g_24 p_252->g_72 p_252->g_101 p_252->g_130 p_252->g_132 p_252->g_134 p_252->g_135 p_252->g_136
 */
int32_t * func_12(int64_t  p_13, uint16_t  p_14, struct S3 * p_252)
{ /* block id: 10 */
    int32_t *l_23 = &p_252->g_24;
    int8_t **l_32 = &p_252->g_9;
    union U0 l_61 = {0x17D93CBFL};
    int32_t **l_65 = &l_23;
    uint8_t l_137 = 0x9BL;
    (*l_23) = p_14;
    (*p_252->g_151) = func_25(((safe_mod_func_uint8_t_u_u((l_32 != l_32), (func_33((p_252->g_136 = func_39(l_32, func_45(((+(safe_add_func_uint32_t_u_u(((func_53(((*l_65) = func_57((*l_23), l_61, (*l_23), p_252)), func_66(l_61, p_252->g_7, p_13, p_13, p_252), (*l_32), p_252) , (*l_32)) != &p_252->g_7), (-1L)))) ^ p_13), p_14, (*l_32), p_252->g_91[0][0][9], p_252->g_92, p_252), p_14, p_252->g_92, (*l_32), p_252)), (*l_32), l_137, p_252->g_138, (*l_32), p_252) || 18446744073709551615UL))) , &p_252->g_7), p_14, &p_252->g_9, p_252->g_7, p_252);
    (**l_65) = (safe_mul_func_uint16_t_u_u(0UL, (-10L)));
    return p_252->g_154;
}


/* ------------------------------------------ */
/* 
 * reads : p_252->g_140
 * writes:
 */
int32_t  func_25(int8_t * p_26, int32_t  p_27, int8_t ** p_28, uint32_t  p_29, struct S3 * p_252)
{ /* block id: 54 */
    uint64_t * volatile * volatile l_143[1];
    int32_t *l_144[3][6][3] = {{{&p_252->g_92,&p_252->g_24,(void*)0},{&p_252->g_92,&p_252->g_24,(void*)0},{&p_252->g_92,&p_252->g_24,(void*)0},{&p_252->g_92,&p_252->g_24,(void*)0},{&p_252->g_92,&p_252->g_24,(void*)0},{&p_252->g_92,&p_252->g_24,(void*)0}},{{&p_252->g_92,&p_252->g_24,(void*)0},{&p_252->g_92,&p_252->g_24,(void*)0},{&p_252->g_92,&p_252->g_24,(void*)0},{&p_252->g_92,&p_252->g_24,(void*)0},{&p_252->g_92,&p_252->g_24,(void*)0},{&p_252->g_92,&p_252->g_24,(void*)0}},{{&p_252->g_92,&p_252->g_24,(void*)0},{&p_252->g_92,&p_252->g_24,(void*)0},{&p_252->g_92,&p_252->g_24,(void*)0},{&p_252->g_92,&p_252->g_24,(void*)0},{&p_252->g_92,&p_252->g_24,(void*)0},{&p_252->g_92,&p_252->g_24,(void*)0}}};
    int32_t l_145 = 0x7A8893D1L;
    int32_t l_146 = (-1L);
    int8_t l_147 = 7L;
    uint64_t l_148 = 0x1AAF7F26593B963BL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_143[i] = &p_252->g_141;
    l_143[0] = p_252->g_140;
    l_145 = (!p_27);
    l_148++;
    return p_29;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t  func_33(uint32_t  p_34, int8_t * p_35, int32_t  p_36, union U2  p_37, int8_t * p_38, struct S3 * p_252)
{ /* block id: 52 */
    uint64_t l_139 = 0xE426BEBBADE577B4L;
    return l_139;
}


/* ------------------------------------------ */
/* 
 * reads : p_252->g_92 p_252->g_7 p_252->g_9 p_252->g_130 p_252->g_132 p_252->g_134
 * writes: p_252->g_130 p_252->g_132 p_252->g_134 p_252->g_135 p_252->g_72
 */
uint32_t  func_39(int8_t ** p_40, int32_t * p_41, int64_t  p_42, uint16_t  p_43, int8_t * p_44, struct S3 * p_252)
{ /* block id: 41 */
    int64_t l_107 = 0x7DACB8C3E15B5572L;
    int8_t **l_121 = &p_252->g_9;
    int8_t ***l_120 = &l_121;
    int32_t l_127[10][8] = {{2L,0x44571AEEL,(-8L),(-8L),0x44571AEEL,2L,0x3710A176L,2L},{2L,0x44571AEEL,(-8L),(-8L),0x44571AEEL,2L,0x3710A176L,2L},{2L,0x44571AEEL,(-8L),(-8L),0x44571AEEL,2L,0x3710A176L,2L},{2L,0x44571AEEL,(-8L),(-8L),0x44571AEEL,2L,0x3710A176L,2L},{2L,0x44571AEEL,(-8L),(-8L),0x44571AEEL,2L,0x3710A176L,2L},{2L,0x44571AEEL,(-8L),(-8L),0x44571AEEL,2L,0x3710A176L,2L},{2L,0x44571AEEL,(-8L),(-8L),0x44571AEEL,2L,0x3710A176L,2L},{2L,0x44571AEEL,(-8L),(-8L),0x44571AEEL,2L,0x3710A176L,2L},{2L,0x44571AEEL,(-8L),(-8L),0x44571AEEL,2L,0x3710A176L,2L},{2L,0x44571AEEL,(-8L),(-8L),0x44571AEEL,2L,0x3710A176L,2L}};
    int32_t l_128 = (-1L);
    uint16_t *l_129 = &p_252->g_130;
    uint64_t *l_131 = &p_252->g_132;
    int16_t *l_133 = &p_252->g_134;
    int i, j;
    (*p_41) = ((p_252->g_135 = (safe_sub_func_int16_t_s_s(((*l_133) |= (safe_add_func_uint32_t_u_u(l_107, ((safe_add_func_uint16_t_u_u((((((*l_131) |= ((p_252->g_92 , (~0L)) == (0x61L >= (((*l_129) ^= (safe_div_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((255UL || (safe_sub_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(((((*l_120) = (void*)0) != &p_252->g_9) == (safe_lshift_func_int16_t_s_u(((l_128 = ((safe_mod_func_uint64_t_u_u(((safe_unary_minus_func_uint8_t_u((l_127[6][0] = p_252->g_7))) != (1UL | 0x23DBB834L)), p_43)) | l_107)) ^ (**p_40)), p_252->g_92))), p_42)), 9L))), 4294967295UL)), l_107))) && l_107)))) ^ p_42) || 0UL) , 0x2826L), p_43)) < (**p_40))))), 0UL))) ^ 0UL);
    return p_43;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_252->g_101
 */
int32_t * func_45(int8_t  p_46, int32_t  p_47, int8_t * p_48, int32_t * p_49, int16_t  p_50, struct S3 * p_252)
{ /* block id: 37 */
    union U0 l_99 = {0x120DA2E7L};
    union U0 *l_100[1][8] = {{&l_99,&l_99,&l_99,&l_99,&l_99,&l_99,&l_99,&l_99}};
    int32_t l_102[4][8] = {{1L,1L,(-10L),0x64EC2A0AL,(-1L),0x64EC2A0AL,(-10L),1L},{1L,1L,(-10L),0x64EC2A0AL,(-1L),0x64EC2A0AL,(-10L),1L},{1L,1L,(-10L),0x64EC2A0AL,(-1L),0x64EC2A0AL,(-10L),1L},{1L,1L,(-10L),0x64EC2A0AL,(-1L),0x64EC2A0AL,(-10L),1L}};
    int i, j;
    l_102[2][4] = (safe_lshift_func_uint16_t_u_s((((safe_lshift_func_int16_t_s_s((!(safe_mod_func_uint16_t_u_u(((p_252->g_101[5][6][0] = l_99) , p_47), p_46))), 9)) != (+0xEA6EL)) > l_99.f0), 7));
    return &p_252->g_72[5];
}


/* ------------------------------------------ */
/* 
 * reads : p_252->g_24
 * writes: p_252->g_24 p_252->g_72
 */
uint64_t  func_53(int32_t * p_54, int8_t ** p_55, int8_t * p_56, struct S3 * p_252)
{ /* block id: 19 */
    int32_t l_82[8] = {0x6EFFBB89L,0x6EFFBB89L,0x6EFFBB89L,0x6EFFBB89L,0x6EFFBB89L,0x6EFFBB89L,0x6EFFBB89L,0x6EFFBB89L};
    int32_t l_83 = (-10L);
    int32_t l_84 = 7L;
    int32_t l_85 = (-2L);
    int32_t l_86 = 1L;
    uint32_t l_87 = 0x018D198DL;
    int i;
    if ((p_252->emi_input[0] < p_252->emi_input[1]))
    { /* block id: 20 */
        int32_t *l_81[3][1];
        int32_t **l_90 = &l_81[2][0];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_81[i][j] = &p_252->g_72[2];
        }
        ++l_87;
        (*l_90) = (void*)0;
    }
    else
    { /* block id: 31 */
    }
    (*p_54) |= 0x26825732L;
    for (l_83 = 0; l_83 < 6; l_83 += 1)
    {
        p_252->g_72[l_83] = 1L;
    }
    return p_252->g_24;
}


/* ------------------------------------------ */
/* 
 * reads : p_252->g_7 p_252->g_24
 * writes: p_252->g_24
 */
int32_t * func_57(uint64_t  p_58, union U0  p_59, uint16_t  p_60, struct S3 * p_252)
{ /* block id: 12 */
    int32_t *l_64 = &p_252->g_24;
    (*l_64) = (((safe_div_func_int16_t_s_s(0x64F8L, 65528UL)) != p_252->g_7) < p_252->g_24);
    return l_64;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t ** func_66(union U0  p_67, int64_t  p_68, uint32_t  p_69, int64_t  p_70, struct S3 * p_252)
{ /* block id: 16 */
    int32_t *l_71 = &p_252->g_72[5];
    int32_t *l_73 = &p_252->g_72[5];
    int32_t *l_74[8] = {&p_252->g_72[5],&p_252->g_72[5],&p_252->g_72[5],&p_252->g_72[5],&p_252->g_72[5],&p_252->g_72[5],&p_252->g_72[5],&p_252->g_72[5]};
    int32_t l_75 = 0x5639B6AFL;
    uint64_t l_76 = 0x0455D89F82A4162AL;
    int i;
    l_76--;
    return &p_252->g_9;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global int *emi_input) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[74];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 74; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[74];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 74; i++)
            l_special_values[i] = 0;
    struct S3 c_253;
    struct S3* p_252 = &c_253;
    struct S3 c_254 = {
        (-5L), // p_252->g_7
        &p_252->g_7, // p_252->g_9
        0x7BE58499L, // p_252->g_24
        {1L,1L,1L,1L,1L,1L}, // p_252->g_72
        8L, // p_252->g_92
        {{{&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92},{&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92},{&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92},{&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92},{&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92}},{{&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92},{&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92},{&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92},{&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92},{&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92}},{{&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92},{&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92},{&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92},{&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92},{&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92}},{{&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92},{&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92},{&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92},{&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92},{&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92,&p_252->g_92}}}, // p_252->g_91
        {{{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}}},{{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}}},{{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}}},{{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}}},{{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}}},{{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}},{{0x1F1FED34L},{0x3CF742FFL}}}}, // p_252->g_101
        0xA0F8L, // p_252->g_130
        0x24C1B6DC2EE892D9L, // p_252->g_132
        0x023EL, // p_252->g_134
        0x719CE8E1L, // p_252->g_135
        0x47B1BD9BL, // p_252->g_136
        {0x632AL}, // p_252->g_138
        &p_252->g_132, // p_252->g_141
        &p_252->g_141, // p_252->g_140
        (void*)0, // p_252->g_142
        &p_252->g_72[0], // p_252->g_151
        &p_252->g_24, // p_252->g_154
        &p_252->g_154, // p_252->g_155
        0x3BA4L, // p_252->g_250
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        emi_input, // emi_input
    };
    c_253 = c_254;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_252);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_252->g_7, "p_252->g_7", print_hash_value);
    transparent_crc(p_252->g_24, "p_252->g_24", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_252->g_72[i], "p_252->g_72[i]", print_hash_value);

    }
    transparent_crc(p_252->g_92, "p_252->g_92", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_252->g_101[i][j][k].f0, "p_252->g_101[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_252->g_130, "p_252->g_130", print_hash_value);
    transparent_crc(p_252->g_132, "p_252->g_132", print_hash_value);
    transparent_crc(p_252->g_134, "p_252->g_134", print_hash_value);
    transparent_crc(p_252->g_135, "p_252->g_135", print_hash_value);
    transparent_crc(p_252->g_136, "p_252->g_136", print_hash_value);
    transparent_crc(p_252->g_138.f0, "p_252->g_138.f0", print_hash_value);
    transparent_crc(p_252->g_250, "p_252->g_250", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 74; i++)
            transparent_crc(p_252->l_special_values[i], "p_252->l_special_values[i]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
