load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "newClock",
    srcs = ["newClock.cc"],
    hdrs = ["newClock.h"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "testProg",
    srcs = ["testProg.cc"],
    deps = [
        ":newClock",
        "//chapter16/unorderedLinkedList",
    ],
)
