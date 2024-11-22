##
#  glad + glfw demos
##
cpp_file_names = glob(["*.cpp"])

[
    cc_binary(
        name = cpp_file_name.replace(".cpp", ""),
        srcs = [cpp_file_name],
        copts = [
        ],
        data = [
            # "@com_gl_boilerplate//:resources",
        ],
        includes = [
        ],
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
            "//third_party/glad-460-320es",
            "//third_party/glad-330-300es",
            "@glfw",
            "@glm",
        ],
    )
    for cpp_file_name in cpp_file_names
]
