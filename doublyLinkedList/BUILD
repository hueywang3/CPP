load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "doublyLinkedList",
    srcs = glob(["**/*.inl"]),
    hdrs = glob(["**/*.h"]),
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "testProg",
    srcs = ["testProg.cc"],
    deps = [":doublyLinkedList"],
)
