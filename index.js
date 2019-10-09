const Module = require('./a-node');
const wasm = Module({wasmBinaryFile: 'a-node.wasm'});
wasm.onRuntimeInitialized = function() {
    console.log(wasm.exclaim("Jackie"));
};