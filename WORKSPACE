workspace(name = "com_gl_boilerplate")

load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

##
# GLFW
##
GLFW_VERSION = "3.3.10"

http_archive(
    name = "glfw",
    build_file = "//third_party/glfw:BUILD",
    strip_prefix = "glfw-{}".format(GLFW_VERSION),
    urls = ["https://github.com/glfw/glfw/archive/{}.tar.gz".format(GLFW_VERSION)],
)

##
# GLFW2
##
GLFW2_VERSION = "3.4"

http_archive(
    name = "glfw2",
    build_file = "//third_party/glfw2:BUILD",
    strip_prefix = "glfw-{}".format(GLFW2_VERSION),
    urls = ["https://github.com/glfw/glfw/archive/{}.tar.gz".format(GLFW2_VERSION)],
)
