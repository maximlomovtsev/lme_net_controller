from conans import ConanFile, CMake

class NetControllerConan(ConanFile):
   settings = "os", "compiler", "build_type", "arch"
   generators = "cmake"

   def build(self):
      cmake = CMake(self)
      cmake.configure()
      cmake.build()