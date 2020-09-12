load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "unorderedLinkedList",
    srcs = ["unorderedLinkedList.inl"],
    hdrs = glob(["**/*.h"]),
    visibility = ["//visibility:public"],
    deps = ["//chapter16/linkedList"],
)

cc_binary(
    name = "testProg",
    srcs = ["testProg.cc"],
    deps = [":unorderedLinkedList"],
)

cc_binary(
    name = "testProgA",
    srcs = ["testProgA.cc"],
    deps = [":unorderedLinkedList"],
)
