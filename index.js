const Module = require('./dist/a_node');
const wasm = Module({wasmBinaryFile: 'dist/a_node.wasm'});
wasm.onRuntimeInitialized = function() {
    console.log(wasm.exclaim("Jackie"));
};