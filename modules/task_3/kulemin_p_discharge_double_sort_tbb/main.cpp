    // Copyright 2018 Nesterov Alexander
#include <gtest/gtest.h>
#include <vector>
#include "./kulemin_p_discharge_double_sort_tbb.h"

TEST(Parallel_Operations_OpenMP, Test_90) {
    int count = 90;
    vector* vb = create_random_vector(count);
    vector* sd = new vector(count);
    vector* tr = new vector(count);
    copy_vectors(vb->ptr, sd->ptr, count);
    discharge_sort_seq(vb);
    discharge_sort(sd, tr);
    bool res = check_vectors(vb->ptr, sd->ptr, count);
    ASSERT_EQ(true, res);
}

TEST(Parallel_Operations_OpenMP, Test_100) {
    int count = 100;
    vector* vb = create_random_vector(count);
    vector* sd = new vector(count);
    vector* tr = new vector(count);
    copy_vectors(vb->ptr, sd->ptr, count);
    discharge_sort_seq(vb);
    discharge_sort(sd, tr);
    bool res = check_vectors(vb->ptr, sd->ptr, count);
    ASSERT_EQ(true, res);
}

TEST(Parallel_Operations_OpenMP, Test_120) {
    int count = 120;
    vector* vb = create_random_vector(count);
    vector* sd = new vector(count);
    vector* tr = new vector(count);
    copy_vectors(vb->ptr, sd->ptr, count);
    discharge_sort_seq(vb);
    discharge_sort(sd, tr);
    bool res = check_vectors(vb->ptr, sd->ptr, count);
    ASSERT_EQ(true, res);
}
TEST(Parallel_Operations_OpenMP, Test_140) {
    int count = 140;
    vector* vb = create_random_vector(count);
    vector* sd = new vector(count);
    vector* tr = new vector(count);
    copy_vectors(vb->ptr, sd->ptr, count);
    discharge_sort_seq(vb);
    discharge_sort(sd, tr);
    bool res = check_vectors(vb->ptr, sd->ptr, count);
    ASSERT_EQ(true, res);
}
TEST(Parallel_Operations_OpenMP, Test_160) {
    int count = 160;
    vector* vb = create_random_vector(count);
    vector* sd = new vector(count);
    vector* tr = new vector(count);
    copy_vectors(vb->ptr, sd->ptr, count);
    discharge_sort_seq(vb);
    discharge_sort(sd, tr);
    bool res = check_vectors(vb->ptr, sd->ptr, count);
    ASSERT_EQ(true, res);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
