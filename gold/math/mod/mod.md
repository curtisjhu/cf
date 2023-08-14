# Mod Universe

Modular arithmetic is used to avoid dealing with numbers that overflow built-in data types

Your mod rules:

$(a + b) \mod m = (a \mod m + b \mod m) \mod m $

$(a \cdot b) \mod m = (a \mod m) (b \mod m) \mod m $

$a^x \mod m = (a \mod m)^x \mod m $


## Binary Exponentiation

$ x^{10} \mod MOD $
To avoid overflow, we use binary exponentiation

$ x^{1010_2} \mod MOD $
$ x^8 \cdot x^2 \mod MOD $


