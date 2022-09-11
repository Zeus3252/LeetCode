/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
        
        var result = s.trim();
        var output = result.split(" ").pop();
        return(output.length);
    
};

