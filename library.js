// "use strict";

mergeInto(LibraryManager.library, {
    stub_fun1: function() {
        console.log('call from wasm');
    },
});