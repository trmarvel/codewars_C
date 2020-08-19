# codewars_C
Codewars challenge solutions
## Duplicate Encoder
### Challenge description:

The goal of this exercise is to convert a string to a new string where each character in the new string is "(" if that character appears only once in the original string, or ")" if that character appears more than once in the original string. Ignore capitalization when determining if a character is a duplicate.

### Examples
"din"      =>  "((("

"recede"   =>  "()()()"

"Success"  =>  ")())())"

"(( @"     =>  "))((" 
### Notes

Assertion messages may be unclear about what they display in some languages. If you read "...It Should encode XXX", the "XXX" is the expected result, not the input!

#### Covered Topics
- FUNDAMENTALS
- STRINGS

## Can you find the needle in the haystack?
### Challenge description:

Write a function findNeedle() that takes an array full of junk but containing one "needle"

After your function finds the needle it should return a message (as a string) that says:

"found the needle at position " plus the index it found the needle, so:

##### find_needle(['hay', 'junk', 'hay', 'hay', 'moreJunk', 'needle', 'randomJunk'])
should return "found the needle at position 5"

#### Covered Topics
- FUNDAMENTALS
- ARRAYS
