const find = (str, needle) => {
    let strIndex = 0;
    let needleIndex = 0;
    while (strIndex < str.length) {
        const letter = str[strIndex];
        const needleLetter = needle[needleIndex];
        // Str matches needle so far, but we still need to check the rest of the needle
        if (letter === needleLetter) {
            needleIndex += 1;
            // The entire needle has been found in str, so we are done
            if (needleIndex === needle.length) {
                const firstMatchIndex = strIndex - needle.length + 1;
                return str.slice(firstMatchIndex);
            }
        }
        // There's a mismatch between str and needle, so go back to the beginning of needle
        else {
            needleIndex = 0;
        }
        strIndex += 1;
    }
};
console.log(find('abcdefgh', 'c'));
console.log(find('abcdefgh', 'cd'));
console.log(find('abcdefgh', 'cj'));
console.log(find('abcdefgh', 'ch'));
