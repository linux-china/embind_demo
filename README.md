Embind Demo
===================

### Clion Integration

CLion with emscripten: Settings > Build, Execution, Deployment > CMake,  add following in CMake options: 

```
-DCMAKE_TOOLCHAIN_FILE=/usr/local/Cellar/emscripten/1.38.44/libexec/cmake/Modules/Platform/Emscripten.cmake
```


# References

* https://emscripten.org/docs/porting/connecting_cpp_and_javascript/embind.html
* https://developers.google.cn/web/updates/2018/08/embind
