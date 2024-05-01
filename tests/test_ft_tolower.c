/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:41:14 by eduribei          #+#    #+#             */
/*   Updated: 2024/04/29 20:39:36 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int ft_tolower(int c);

typedef struct
{
    int input;
    char *comment;
    int result;
} Test;

// Function to execute and print test results
void run_test(Test test, int *fail_count)
{
    int expected = tolower(test.input);
	
    if (expected == test.result)
    {
        printf(COLOR_GREEN "[[[PASS]]] " COLOR_RESET);
    }
    else
    {
        printf(COLOR_RED "[[[FAIL]]] " COLOR_RESET);
        (*fail_count)++;
    }

    printf("Input: %d \t Expected: %d \t Output: %d \t(%s)\n", test.input, expected, test.result, test.comment);
}

#define NUM_TESTS 100

int main(void)
{
    int fail_counter = 0;

    Test tests[NUM_TESTS] = {
	{0, "NULL character (ASCII)", ft_tolower(0)},
	{1, "Start of Heading (ASCII)", ft_tolower(1)},
	{45, "Hyphen-Minus (ASCII)", ft_tolower(45)},
	{46, "Full Stop (ASCII)", ft_tolower(46)},
	{47, "Slash (ASCII)", ft_tolower(47)},
	{48, "Digit 0 (ASCII)", ft_tolower(48)},
	{57, "Digit 9 (ASCII)", ft_tolower(57)},
	{58, "Colon (ASCII)", ft_tolower(58)},
	{64, "At Sign (ASCII)", ft_tolower(64)},
	{65, "uppercase letter A (ASCII)", ft_tolower(65)},
	{66, "uppercase letter B (ASCII)", ft_tolower(66)},
	{67, "uppercase letter C (ASCII)", ft_tolower(67)},
	{68, "uppercase letter D (ASCII)", ft_tolower(68)},
	{69, "uppercase letter E (ASCII)", ft_tolower(69)},
	{70, "uppercase letter F (ASCII)", ft_tolower(70)},
	{71, "uppercase letter G (ASCII)", ft_tolower(71)},
	{72, "uppercase letter H (ASCII)", ft_tolower(72)},
	{73, "uppercase letter I (ASCII)", ft_tolower(73)},
	{74, "uppercase letter J (ASCII)", ft_tolower(74)},
	{75, "uppercase letter K (ASCII)", ft_tolower(75)},
	{76, "uppercase letter L (ASCII)", ft_tolower(76)},
	{77, "uppercase letter M (ASCII)", ft_tolower(77)},
	{78, "uppercase letter N (ASCII)", ft_tolower(78)},
	{79, "uppercase letter O (ASCII)", ft_tolower(79)},
	{80, "uppercase letter P (ASCII)", ft_tolower(80)},
	{81, "uppercase letter Q (ASCII)", ft_tolower(81)},
	{82, "uppercase letter R (ASCII)", ft_tolower(82)},
	{83, "uppercase letter S (ASCII)", ft_tolower(83)},
	{84, "uppercase letter T (ASCII)", ft_tolower(84)},
	{85, "uppercase letter U (ASCII)", ft_tolower(85)},
	{86, "uppercase letter V (ASCII)", ft_tolower(86)},
	{87, "uppercase letter W (ASCII)", ft_tolower(87)},
	{88, "uppercase letter X (ASCII)", ft_tolower(88)},
	{89, "uppercase letter Y (ASCII)", ft_tolower(89)},
	{90, "uppercase letter Z (ASCII)", ft_tolower(90)},
	{91, "Left Square Bracket (ASCII)", ft_tolower(91)},
	{92, "Backslash (ASCII)", ft_tolower(92)},
	{93, "Right Square Bracket (ASCII)", ft_tolower(93)},
	{94, "Circumflex Accent (ASCII)", ft_tolower(94)},
	{95, "Underscore (ASCII)", ft_tolower(95)},
	{96, "Grave Accent (ASCII)", ft_tolower(96)},
	{97, "lowercase letter a (ASCII)", ft_tolower(97)},
	{98, "lowercase letter b (ASCII)", ft_tolower(98)},
	{99, "lowercase letter c (ASCII)", ft_tolower(99)},
	{100, "lowercase letter d (ASCII)", ft_tolower(100)},
	{101, "lowercase letter e (ASCII)", ft_tolower(101)},
	{102, "lowercase letter f (ASCII)", ft_tolower(102)},
	{103, "lowercase letter g (ASCII)", ft_tolower(103)},
	{104, "lowercase letter h (ASCII)", ft_tolower(104)},
	{105, "lowercase letter i (ASCII)", ft_tolower(105)},
	{106, "lowercase letter j (ASCII)", ft_tolower(106)},
	{107, "lowercase letter k (ASCII)", ft_tolower(107)},
	{108, "lowercase letter l (ASCII)", ft_tolower(108)},
	{109, "lowercase letter m (ASCII)", ft_tolower(109)},
	{110, "lowercase letter n (ASCII)", ft_tolower(110)},
	{111, "lowercase letter o (ASCII)", ft_tolower(111)},
	{112, "lowercase letter p (ASCII)", ft_tolower(112)},
	{113, "lowercase letter q (ASCII)", ft_tolower(113)},
	{114, "lowercase letter r (ASCII)", ft_tolower(114)},
	{115, "lowercase letter s (ASCII)", ft_tolower(115)},
	{116, "lowercase letter t (ASCII)", ft_tolower(116)},
	{117, "lowercase letter u (ASCII)", ft_tolower(117)},
	{118, "lowercase letter v (ASCII)", ft_tolower(118)},
	{119, "lowercase letter w (ASCII)", ft_tolower(119)},
	{120, "lowercase letter x (ASCII)", ft_tolower(120)},
	{121, "lowercase letter y (ASCII)", ft_tolower(121)},
	{122, "lowercase letter z (ASCII)", ft_tolower(122)},
	{123, "Left Curly Bracket (ASCII)", ft_tolower(123)},
	{124, "Vertical Bar (ASCII)", ft_tolower(124)},
	{125, "Right Curly Bracket (ASCII)", ft_tolower(125)},
	{126, "Tilde (ASCII)", ft_tolower(126)},
	{127, "Delete (ASCII)", ft_tolower(127)},
	{128, "Ç (Latin Capital Letter C With Cedilla)", ft_tolower(128)},
	{129, "ü (Latin Small Letter U With Diaeresis)", ft_tolower(129)},
	{139, "ï (Latin Small Letter I With Diaeresis)", ft_tolower(139)},
	{149, "ò (Latin Small Letter O With Grave)", ft_tolower(149)},
	{159, "ƒ (Latin Small Letter F With Hook)", ft_tolower(159)},
	{169, "⌐ (Reversed Not Sign)", ft_tolower(169)},
	{170, "¬ (Not Sign)", ft_tolower(170)},
	{255, "  (Non-Breaking Space)", ft_tolower(255)},
	{256, "Ā (Latin Capital Letter A With Macron)", ft_tolower(256)},
	{257, "ā (Latin Small Letter A With Macron)", ft_tolower(257)},
	{500, "Ǵ (Latin Capital Letter G With Acute)", ft_tolower(500)},
	{501, "ǵ (Latin Small Letter G With Acute)", ft_tolower(501)},
	{700, "ˬ (Modifier Letter Raised Up Arrow)", ft_tolower(700)},
	{701, "˭ (Modifier Letter Raised Down Arrow)", ft_tolower(701)},
	{888, "͸ (Greek Small Letter Pamphylian Digamma)", ft_tolower(888)},
	{889, "͹ (Greek Kolon)", ft_tolower(889)},
	{1000, "Ϩ (Coptic Capital Letter Hori)", ft_tolower(1000)},
	{1001, "ϩ (Coptic Small Letter Hori)", ft_tolower(1001)},
	{1500, "᎐ (Cherokee Letter Ye)", ft_tolower(1500)},
	{1501, "᎑ (Cherokee Letter Yi)", ft_tolower(1501)},
	{2000, "῰ (Greek Ypogegrammeni)", ft_tolower(2000)},
	{2001, "῱ (Greek Prosgegrammeni)", ft_tolower(2001)},
	{3000, "〰 (Wavy Dash)", ft_tolower(3000)},
	{3001, "〱 (Vertical Kana Repeat Mark)", ft_tolower(3001)},
	{4000, "ী (Bengali Vowel Sign Ii)", ft_tolower(4000)},
	{4001, "ু (Bengali Vowel Sign U)", ft_tolower(4001)},
	{5000, "ᚠ (Runic Letter Fehu Feoh Fe F)", ft_tolower(5000)},
	{5001, "ᚡ (Runic Letter V)", ft_tolower(5001)}
	};

	printf(COLOR_BLUE ">TESTING ft_tolower------------------------------------------------------------------------\n" COLOR_RESET);
    printf("Here I'm testing for extended ASCII (0-255) ISO-8859-1 and beyond.\n");

	// RUNNING TESTS
	for (int i = 0; i < NUM_TESTS; i++)
        run_test(tests[i], &fail_counter);


	// SAVING RESULTS
    if (fail_counter > 0)
        ft_save_results("ft_tolower: FAIL");
    else
        ft_save_results("ft_tolower: OK");


    printf("\n");
    return (0);
}
