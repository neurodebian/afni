#undef  NX_mcw
#undef  NY_mcw
#define NX_mcw 90
#define NY_mcw 90
static char * BAR_mcw[] = {
   "9A9A9A9AA5Z5A6Z8A",
   "9A9A9A9A9A9A7A",
   "A9Z9Z5Z9A9A9A9AA",
   "9A9A9A9ZZZ5A9Z4Z5A",
   "9A9A9A9A9A8A8Z",
   "4Z3A9Z9ZZZ9A9A9A7A",
   "9A8A9ZZZ4AZ3AZZA6Z4A9ZZZA",
   "9A9A9A9A9A9ZZAA4Z",
   "ZZ5A9ZZ3A9Z9A9A9A5A",
   "9A4A6Z4A9Z5A9Z3Z3A6Z3A",
   "9A9A9A9A6A3Z3A9Z4Z",
   "ZZ5A9Z4Z3A3Z9A9A9A8A",
   "9A9Z4Z4A6Z5AZZ4A9Z4Z5A",
   "9A9A9A9AAA9Z4A9ZZ",
   "AZZAA6Z3A9ZZ9A9A9A9AA",
   "6A6Z3A9ZZZ4AZZAA9Z4A6Z8A",
   "9A9A9A8A3Z3A9Z4Z7A",
   "AA9Z4Z3A4Z9A9A9A9A3A",
   "AA9Z4Z5AZZAAZZ4A3Z5A9Z4Z9AA",
   "9A9A9A4A9ZZ3A7Z3AZA5Z",
   "6Z3A9ZZ9A9A9A9A5AZ",
   "5Z4A9ZZZ4A9Z5Z4A6Z9A4A",
   "9A9A9A4Z3A9Z7Z5A6Z",
   "9ZZ3A3Z9A9A9A9A4A5Z",
   "8Z6A6Z4A3Z6A9Z4Z9A6A",
   "9A9A6A9ZZ4A9ZZZAZ3A7Z",
   "Z3A9ZZ9A9A9A9A3A5Z3A",
   "AA9Z3Z4AZZAA9ZZZ5A6Z9A8A",
   "9A9AAA4ZAA9Z8Z7A9ZZZ",
   "6ZAA4Z9A9A9A9AA9Z3Z",
   "8A3ZAZZ3A4Z8A9Z3Z9A9AAA",
   "9A8A8Z4A9ZZZ4A9Z5Z3A",
   "A8Z9A9A9A9A5Z4A7Z",
   "9Z4A9Z8Z4A4Z9A9A5A",
   "9A4A9Z9Z9Z4A9Z8Z",
   "7Z9A9A9A8A9Z4Z6A",
   "A9ZAA4Z7A9Z4Z9A9A7A",
   "9AA8Z5A9ZZZ7A9ZZZ5A4Z",
   "4Z9A9A9A7A5Z4A9Z5Z",
   "ZZAAZ3A9Z8Z4A5Z9A9A9A",
   "6A9Z9Z7Z4A9Z9Z8Z",
   "ZZ9A9A9A6A9Z9Z8Z",
   "4A9Z9Z9Z9A9A9A3A",
   "3A9Z6Z7A6Z3A4Z7A9Z6ZA",
   "9A9A9A4A9Z3Z9A4A5Z",
   "4Z9A4A9Z3Z9A9A9A4AZ",
   "5Z9A9A3A5Z9A9A3A6Z3A",
   "9A9A9A9A9A9AAAZZ3A",
   "9A9A9A9A9A9A7A",
   "9A9A9A9A9A9A7A",
   "9A9A6A9Z9Z9Z7A3Z",
   "9Z9Z6Z9A9A9A9AA",
   "9A9A9Z9A9A9A7A",
   "9A9A9A9A9A4A5Z7A",
   "9A9A9A9A9A9A7A",
   "9A9A9A9A9A9A7A",
   "9A9A9A9A9A9A7A",
   "9A9A9A9A6A4Z8A3Z4A",
   "9A9A9A9A9A9A7A",
   "9AAA4Z7AZZ9A9A9A9AA",
   "5AZ9A9A9A7A4Z6A3ZAA6Z",
   "ZZAA7Z3A5Z3A5Z7AZ5A5Z9A7A",
   "8A4Z6A3Z3A3Z3AZ3AZZ3AZZ3A3Z3AZZ4AZ4A",
   "AZZ6A3Z9A9A7A5Z5A3Z3A3Z5A",
   "AAZZ4AZZAA3ZAAZZ5AZZ4A3Z5A3Z9A9AAA",
   "5AZZAZZ4AZAZZ3A3Z7AZZ5AZAA3ZA3Z9AAAZZ",
   "Z5A3Z9A9A7AZZAZZ4AZAZZ3A3Z7AZ",
   "Z5AZZA3ZAZZ9A3A3Z5A3Z9A9A5A",
   "AAZZA3Z3AZAZZ3A3ZAAZ4AZZ5AZZA3ZAZZ9AAAZAAZZA",
   "3A3Z9A9A7AZZAAZZAAZAAZZ3A6Z4AZZAA",
   "3AZZA3ZAZZ9AAAZAAZZ4A3Z9A9A7AZ",
   "ZAA3ZAZAAZZ3A3ZAAZ4AZZ5AZZA3ZAZZ9AAZ3AZZ4A",
   "3Z9A9A7AZZAA4Z3AZZ3A3Z7AZZ5A",
   "ZZA3ZAZZ9AA7Z3A3Z9A9A7AZZAA",
   "A3Z3AZZ3A3Z7AZZ5AZZA3ZAZZ9AAZ4AZZ3A3Z",
   "9A9A7AZZ3A3Z3AZZ3A3Z7AZZ5AZZA",
   "3ZA3Z6AZAZ5AZZ3A3Z9A9A7AZZ3AZZ",
   "4AZZ3A3Z4AZAAZZ5AZAA3ZAAZZ5AZZAZ6AZZAA3Z3A",
   "AZ9A9AAAZZ4AZ4AZZ3A3Z4AZAAZZ4AZZAA3Z",
   "AA3Z3AZZAAZ6AZZAA3Z3AZZ9A9AA4Z7A",
   "4ZAA8ZA7Z3A5Z3A4Z3A3Z4A4ZA8ZA",
   "9A9A9A9A9A9A7A",
   "9A9A9A9A9A9A7A",
   "9A9A9A9A9A9A7A",
   "9A9AA4Z9A9A9A9AAA",
   "9A9A9A9A9AAZZ4A3Z6A",
   "9A9A9A9A9A9A7A",
   "9A4AZZ6AZZ9A9A9A9AAA",
   "9A9A9A9A5A3Z7AZ4A5Z",
   "3A5Z5A5Z5A8Z4A6ZAA8Z9AA",
   "9A3Z9AAAZ5AZ3AZZ8AZZ8AZZ4AZA",
   "AAZZ4AZZAAZZ4AZ9A9AAZZ9AAAZZ5AZZA",
   "AZZ8AZZ8AZZ7AZZ6AZAAZZ9A9A",
   "5A3Z9AAZZ7AZZAZZ8AZZ8AZZ7AZZ",
   "9AZZ9A9A5A3Z9AAZZ7AZZAZZ",
   "8AZZ8AZZ6AZZ9AAZZ9A9A3A",
   "AA3Z9AAZZ7AZZAZZ8AZZ8AZZAAZ3AZZ4A",
   "6AZZ3AZ9A9AA3Z9AAZZ7AZZAZZ3A",
   "5AZZ8A5Z3AZZ9AA6Z9A9AAZ",
   "ZZ9AAZZ7AZZAZZ8AZZ8AZZAAZ3AZZ7A",
   "3AZZ3AZ9A9AA3Z8AZAZZ7AZZAZZ6A",
   "AAZZ8AZZ6AZZ6A3ZAZZ9A9A6AZZA",
   "7AZAZZ7AZZAZZ8AZZ8AZZ6AZZ7AZAA",
   "ZZ9A9A6A3Z7AZAZZ7AZZAZZ8AZ",
   "Z8AZZ7AZZ6AZAAZZ9A9A7AZZ3A",
   "3AZZAAZZ5AZZAAZZ5AZAAZZ5AZAAZZ7AZZ5AZZAAZZA",
   "4AZ9A9AA3Z4AZZ4AZZ3AZZ3A3Z3AZZAA3ZA",
   "AAZZAA3Z4AZAA3ZAAZZ3A3Z3AZZ9A9A3A5ZA",
   "6A4Z4A9ZA9ZA9Z4A4Z3A7Z",
   "ZZ9A9A9A9A9A9A5A",
   "9A9A9A9A9A9A7A",
   "9A9A9A9A9A9A7A",
   "9A9A9A9A9A9A7A",
   "9A9A9A9A9A9A7A",
   "9A9A9A9A9A9A7A",
   "9A9A6A4Z5A3ZAZZ3A3Z5A3Z5A3Z",
   "ZAAZZ4A4ZAA3ZAAZZAZZ5A3Z4A4Z3A7Z3AZZ5A",
   "AAZZAZZAAZZAZZ3AZZA3ZAAZZAAZZAAZZ4AZZAAZZAZZAZZAAZZ3A3Z",
   "4AZ4AZ3AZZ3AZ3AZZ3AZ3AZZAZZAZZ3AZAAZZ4AZAAZ4AZA",
   "A3Z3AZZAZZ3AZAZZAA3Z3AZZ3AZZ4AZZAAZZ7AZZAA3ZAAZ",
   "ZAZZAZZ5AZZ7AZZ4AZZA4ZAAZZAZZ5AZZAA4ZAAZZ3A",
   "ZZ4AZZAAZZ7AZZAA3ZAAZZAZZAAZZ4AZZ7AZZ4AZZAZZ",
   "AZAAZZA3Z4AZZAA4ZAAZZ3AZZ4AZZAAZZ7AZZAAZAZAAZZAZ",
   "Z3A3ZAAZZ7AZZ4AZZAZZAZZAZZAA3Z3AZZAAZZAZZAZZ3AZZA",
   "3AZZAA5Z4AZZAAZAZAZZAAZZ4A3ZAZZ7AZZ4AZZAZZAAZ",
   "AZZ4AZZAAZZAAZZAAZAZZ3AZZ4AZZAAZZ7AZZAZZAZAZZAAZZAA",
   "3AZZAZZ7AZZ4AZZAZZAA4Z5AZZAZZAAZZAA4Z3AZZ4A",
   "ZZAAZZ7AZZAZAAZAZ3AZZ6AZAZZ5AZAZZ4AZZAZZ3A3Z",
   "6AZAZZAAZZ3A3Z3AZZ4AZZAAZZ8A3ZAA3Z3AZZAZ3A",
   "AZAAZZ4AZAAZ4AZAAZZ4AZZAZ4AZAZZAAZZ4AZZ4AZ4AZAA",
   "AZZ8AZZ4AZZ3AZZA3ZAZZ3A3ZAZZAAZZAAZZAAZZ4AZZAZZ",
   "ZAZZAZZAAZZ4AZZ5A4Z3A4Z7AZZ4AZZ3AZZ3A3ZAA",
   "AAAZZZZAAAAZZZZAAZZZZAAAZZAAAZZZAAZZAZZZAAAAZZAA"
};
#undef  NLINE_mcw
#define NLINE_mcw 133