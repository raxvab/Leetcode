/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
 return s.split("").reverse().join("").split(" ").reverse().join(" ");
};