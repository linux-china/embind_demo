global["wasmChannel"] = {
    service: function (id, type, metadata, data) {
        console.log("received: " + data)
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
const wasm = Module({wasmBinaryFile: 'a_node2.wasm'});

wasm.onRuntimeInitialized = function () {
    console.log(wasm.exclaim("Jackie"));
    wasm.service(1,2,"metadata","Jackie");
};
