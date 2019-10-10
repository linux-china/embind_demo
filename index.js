global["reactive"] = {
    receiveOne: function (id, type, metadata, data) {
        console.log("metadata: " + metadata)
    },
    receive: function (id, type, metadata, data) {
        console.log("metadata: " + metadata)
    }
};
global["user"] = {
    findUserInfo: function (id) {
        console.log("user id:" + id);
        console.log("call from stubs by wasm");
        return id + 1
    },
    funNickById: function (id) {
        return "nick: " + id;
    }
};
const Module = require('./dist/a_node');
const wasm = Module({wasmBinaryFile: 'dist/a_node.wasm'});

wasm.onRuntimeInitialized = function () {
    console.log(wasm.exclaim("Jackie"));
    console.log(wasm.exclaim("Tom"));
    console.log("counter: " + wasm.getCounter())
};