load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "orderedLinkedList",
    srcs = ["orderedLinkedList.inl"],
    hdrs = glob(["**/*.h"]),
    visibility = ["//visibility:public"],
    deps = ["//chapter16/linkedList"],
)

cc_binary(
    name = "testProg",
    srcs = ["testProg.cc"],
    deps = [":orderedLinkedList"],
)
