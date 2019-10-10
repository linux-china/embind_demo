global["user"] = {
    findUserInfo: function (id) {
        console.log("user id:" + id);
        console.log("call from stubs by wasm");
        return id + 1
    }
};
const Module = require('./dist/a_node');
const wasm = Module({wasmBinaryFile: 'dist/a_node.wasm'});

wasm.onRuntimeInitialized = function () {
    console.log(wasm.exclaim("Jackie"));
};