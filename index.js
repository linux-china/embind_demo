const Module = require('./dist/a-node');
const wasm = Module({wasmBinaryFile: 'dist/a-node.wasm'});
wasm.onRuntimeInitialized = function() {
    console.log(wasm.exclaim("Jackie"));
};