##
#  explicitly uses egl
##
cpp_file_names = glob(["*.cpp"])

[
    cc_binary(
        name = cpp_file_name.replace(".cpp", ""),
        srcs = [cpp_file_name],
        copts = [],
        includes = [],
        linkopts = select({
            "@platforms//os:macos": [
                "-framework",
                "OpenGL",
            ],
            "@platforms//os:windows": [
                "-DEFAULTLIB:opengl32.lib",
            ],
            "@platforms//os:linux": [
                "-lGL",
                "-lGLU",
                "-lX11",
            ],
            "//conditions:default": [],
        }),
        deps = [
            "//third_party/glad2",
            "@glfw2",
            "@glm",
        ],
    )
    for cpp_file_name in cpp_file_names
]
