# Instructor Guide: PoceduralProgramming II - Week 1

## Description

During this first week, we will be introduced to pointers, reference to memory addresses , pointer arithrmetic , number system conversions between hexadecimal, decimal, and binary systems. We will also be introduced to binary and bitwise operations like bit shifting and toggling techniques. This week also covers the effective use of Register storage, Volatile Keyword and Variable Scope. At the end of this week we will be introduced to create modular programs by separating code into multiple files and using preprocessor directives.

## Learning Outcomes


1. Understand pointers, memory addresses, and their usage in C programming.
2. Convert between hexadecimal, decimal, and binary number systems.
3. Explain binary representation of data and perform bitwise operations.
4. Utilize register storage, volatile keyword, and variable scope effectively.
5. Develop modular programs by separating code into files and using preprocessor directives.


> **Note**: We assume some time will be spent on introductions, syllabus, general overview, etc., so we have left some extra time in the learner hours to address these and other administrative items.

## Curriculum Overview

The following activities, lessons, and knowledge checks have been included for your use in their suggested order:

| Type            | Title                                                   | Time      | Markdown Link                                                | Points |
| --------------- | ------------------------------------------------------- | --------- | ------------------------------------------------------------ | ------ |
| Lesson          | Pointers and Memory Addresses | 60        | [lesson-installing-and-configuring-vs-code-and-dot-net-sdk.md](lessons/lesson-installing-and-configuring-vs-code-and-dot-net-sdk.md) |        |
| Lesson          | Vocareum                                                | 30        | TBD                                                          |        |
| Activity        | Hello, World                                            | 30        | [activity-hello-world.md](activities/HelloWorld/activity-hello-world.md) |        |
| Lesson          | Strings and Writing to the Console                      | 30        | [lesson-strings-and-writing-to-the-console.md](lessons/lesson-strings-and-writing-to-the-console.md) |        |
| Activity        | Reading and Writing with the Console Type               | 30        | [activity-reading-and-writing-with-the-console-type.md](activities/ConsoleDemo/activity-reading-and-writing-with-the-console-type.md) |        |
| Lesson          | Comments and My First Variable                          | 30        | [lesson-comments-and-variables.md](lessons/lesson-comments-and-variables.md) |        |
| Lesson          | Primitive Types                                         | 60        | [lesson-primitive-types.md](lessons/lesson-primitive-types.md) |        |
| Activity        | Parsing Console Input to Primitive Types                | 30        | [activity-parsing-console-input-to-primitive-types.md](activities/Parse/activity-parsing-console-input-to-primitive-types.md) |        |
| Lesson          | Formatting Output                                       | 30        | [lesson-formatting-output.md](lessons/lesson-formatting-output.md) |        |
| Exercise        | Learner Profile                                         | 120       | [exercise-learner-profile.md](exercises/LearnerProfile/exercise-learner-profile.md) |        |
| Solution        | Learner Profile                                         | -         | [solution-learner-profile.md](exercises/LearnerProfile/solution-learner-profile.md) |        |
| Lesson          | Conditional Operators                                   | 60        | [lesson-conditional-operators.md](lessons/lesson-conditional-operators.md) |        |
| Lesson          | The if Statement                                        | 30        | [lesson-if-statement.md](lessons/lesson-if-statement.md)     |        |
| Activity        | The Random Type                                         | 60        | [activity-random-type.md](activities/Random/activity-random-type.md) |        |
| Lesson          | The Switch Statement                                    | 30        | [lesson-switch-statements.md](lessons/lesson-switch-statements.md) |        |
| Activity        | Is it a Vowel?                                          | 30        | [activity-is-it-vowel.md](activities/IsItAVowel/activity-is-it-vowel.md) |        |
| Exercise        | HTTP Status Codes                                       | 60        | [exercise-http-status-codes.md](exercises/HttpStatusCodes/exercise-http-status-codes.md) |        |
| Exercise        | Sales Tax Calculator                                    | 120       | [exercise-sales-tax-calculator.md](exercises/SalesTax/exercise-sales-tax-calculator.md) |        |
| Solution        | Sales Tax Calculator                                    | -         | [solution-sales-tax.md](exercises/SalesTax/solution-sales-tax-calculator.md) |        |
| Exercise        | Area Calculator                                         | 180       | [exercise-area-calculator.md](exercises/AreaCalculator/exercise-area-calculator.md) |        |
| Solution        | Area Calculator                                         | -         | [solution-area-calculator.md](exercises/AreaCalculator/solution-area-calculator.md) |        |
| Knowledge Check | Quiz: Week 1                                            | 15        | [quiz-week-1](knowledge-checks/quiz-week-1.md)               |        |
|                 | **Learner Hours**                                       | **16.50** |                                                              |        |

## Day 1

| Type        | Title                                                   | Time     | Markdown Link                                                | Points |
| ----------- | ------------------------------------------------------- | -------- | ------------------------------------------------------------ | ------ |
| Orientation | Atlas School Orientation                                | ?        |                                                              |        |
| Lesson      | Vocareum                                                | 15       | TBD                                                          |        |
| Lesson      | Installing and Configuring the VS-Code and the .NET SDK | 90       | [lesson-installing-and-configuring-vs-code-and-dot-net-sdk.md](lesson-installing-and-configuring-vs-code-and-dot-net-sdk.md) |        |
| Activity    | Hello, World                                            | 30       | [activity-hello-world.md](activities/HelloWorld/activity-hello-world.md) |        |
| Lesson      | Strings and Writing to the Console                      | 30       | [lesson-strings-and-writing-to-the-console.md](lesson-strings-and-writing-to-the-console.md) |        |
| Activity    | Reading and Writing with the Console Type               | 30       | [activity-reading-and-writing-with-the-console-type.md](activities/ConsoleDemo/activity-reading-and-writing-with-the-console-type.md) |        |
| Lesson      | Comments and My First Variable                          | 30       | [lesson-comments-and-variables.md](lesson-comments-and-variables.md) |        |
|             | **Learner Hours**                                       | **3.75** |                                                              |        |

On a live delivery day, any work not completed should be completed asynchronously to maintain pacing..

### Optional: Atlas School Orientation

This is purely for your team to set expectations with the learners, introduce the instructors, and show the students the tools (i.e. LMS, Vocareum, Slack, etc.) they will use to complete this course.

### Lesson: Installing and Configuring the VS-Code and the .NET SDK

Depending on the class, this lesson can either be easy or more time-consuming. Be on the lookout for learners who already have the SDK on their machines and may be using older versions. Some students with previous experience may have a preference for a different IDE. It's up to the instructor/ school whether or not that is acceptable, but it is best to warn them that screenshots and guides in the course may deviate slightly due to the different IDE. They will still need to submit assignments through the Vocareum interface, so warning them of that is prudent. 

**Stretch Goals**: There are no stretch goals for this lesson.

### Lesson: Vocareum

TBD

### Activity: Hello, World

This activity is the first time they'll get to write code! Questions often relate to how to save or navigate the IDE. This is where they'll find out if they downloaded and installed the proper SDK unless they use a pre-configured virtual machine.

Students with some coding experience will likely breeze through this activity, but it's important to reinforce that it's still necessary to run it to test their environments, both on local IDEs or through Vocareum.

**Stretch Goals:** Some stretch goals for this activity include having them practice printing other phrases to the console to experiment with `Console.WriteLine()`. 

### Lesson: Strings and Writing to the Console Type

In this lesson and your general speech patterns with the class, it's important to diligently use proper C# phrasing. Ensure that you refer to types as types, not classes. Every class is a type, but not every type is a class. It is important to make that distinction and keep reinforcing it.

**Stretch Goals:** Consider tasking them with looking up the other string literals in the documentation.

### Activity: Reading and Writing with the Console Type

This activity gives the students some quick demonstrations of the various read-and-write methods of the Console type. You are encouraged to sprinkle in your professional experience about using spacing, formatting, and the appropriate methods to make CLI applications more user-friendly.

**Stretch Goals**: Explore other Console members, such as `ForegroundColor`. The conclusion has a link to the documentation. This is a good time to explore the documentation and discuss how to use the examples to learn about new types and members.

### Lesson: Comments and My First Variable

Besides the syntax of variable declaration in C#, the most important thing to emphasize is the use of comments as an outlining tool. Beginners often code before understanding the problem, which leads them astray. Throughout the course, consistently reinforce that planning is important. It's okay to dive into code to explore an idea to understand the problem better, but you should never attempt a full application without outlines and planning.

**Stretch Goals: **None

------

## Day 2

| Type     | Title                                    | Time    | Markdown Link                                                | Points |
| -------- | ---------------------------------------- | ------- | ------------------------------------------------------------ | ------ |
| Lesson   | Primitive Types                          | 60      | [lesson-primitive-types.md](lessons/lesson-primitive-types.md) |        |
| Activity | Parsing Console Input to Primitive Types | 30      | [activity-parsing-console-input-to-primitive-types.md](activities/Parse/activity-parsing-console-input-to-primitive-types.md) |        |
| Lesson   | Formatting Output                        | 30      | [lesson-formatting-output.md](lessons/lesson-formatting-output.md) |        |
| Exercise | Learner Profile                          | 90      | [exercise-learner-profile.md](exercises/LearnerProfile/exercise-learner-profile.md) |        |
|          | **Learner Hours**                        | **3.5** |                                                              |        |

> Any work not completed on a live delivery day should be completed asynchronously to maintain pace.
>

### Lesson: Primitive Types

From this point forward, use proper terms when referring to types: object, member, behavior, data, etc. 

**Stretch Goals:** Have the students think about real-world objects and how they could be assembled from primitives if you break them down far enough.

### Activity: Parsing Console Input to Primitive Types

Reinforcing the concept of types and compatibility is the key part of this lesson.

**Stretch Goals:** Examine the stack trace on an exception. Learn its components and how to interpret it. Demonstrate how to take a C# exception code and look it up online (or in an AI LLM).

### Lesson: Formatting Output

These are only a few of the format codes. There are also codes for dates and we can create our own. String interpolation is the preferred means for modern C# developers, and they should always use it if they have the option. The other syntax is common in legacy applications. Formatting text nicely for users raises the perceived quality of the application.

**Stretch Goals:** In what cases would leading zeros be important? One of the most common examples is a UPC on retail items. Should you store such "numbers" as numeric? If you don't use them in math expressions, storing them as a string is often recommended.

### Exercise: Learner Profile

This exercise is relatively simple to complete. It should shake out anyone who is struggling with the concept of types.

**Stretch Goals:** Have them add their favorite quote. Are there any issues reading characters like " " from the console?

------

## Day 3

| Type     | Title                 | Time    | Markdown Link                                                | Points |
| -------- | --------------------- | ------- | ------------------------------------------------------------ | ------ |
| Solution | Learner Profile       | -       | [solution-learner-profile.md](exercises/LearnerProfile/solution-learner-profile.md) |        |
| Lesson   | Conditional Operators | 30      | [lesson-conditional-operators.md](lessons/lesson-conditional-operators.md) |        |
| Lesson   | The If Statement      | 30      | [lesson-if-statement.md](lessons/lesson-if-statement.md)     |        |
| Activity | The Random Type       | 60      | [activity-random-type.md](activities/Random/activity-random-type.md) |        |
| Lesson   | The Switch Statement  | 30      | [lesson-switch-statements.md](lesson-switch-statements.md)   |        |
|          | **Learner Hours**     | **2.5** |                                                              |        |

### Solution: Learner Profile

It is up to the instructor to release the solution code to the students. Students may also be finishing up leftover work on learner profile at this time as well.

**Stretch Goals:** After comparing their code to the solution, students may revise any code that could be done cleaner or correct any potential mistakes.

### Lesson: Conditional Operators

This is a good time to reinforce that anything true or false can be used in a conditional expression. This includes methods, boolean data members, and comparisons using the operators.

**Stretch Goals:** Develop complicated real-world expressions using English mixed with || && conditions. For example, all the conditions that might be used to determine eligibility for college sports (GPA, Attendance, minimum credit hours, etc.).

### Lesson: The If Statement

Reinforce that only the first true condition's code block is executed.

**Stretch Goals:** None

### Activity: The Random Type

This is a good time to discuss instance versus static types. Why do we need the **new** keyword with Random but not with Console? You do not have to go too deep since we will cover it in more detail later.

**Stretch Goals**: Explore other members of the Random type using the official documentation.

### Lesson: The Switch Statement

Mix in your professional experience and personal preferences for when to use switch statements. They are most commonly used when processing logic, such as status codes, or any time we have lists of values that utilize the same code block.

**Stretch Goals:** None

## Day 4

| Type     | Title                | Time     | Markdown Link                                                | Points |
| -------- | -------------------- | -------- | ------------------------------------------------------------ | ------ |
| Activity | Is it a Vowel?       | 30       | [activity-is-it-vowel.md](activities/IsItAVowel/activity-is-it-vowel.md) |        |
| Exercise | HTTP Status Codes    | 60       | [exercise-http-status-codes.md](exercises/HttpStatusCodes/exercise-http-status-codes.md) |        |
| Solution | HTTP Status Codes    | -        | [solution-http-status-codes.md](exercises/HttpStatusCodes/solution-http-status-codes.md) |        |
| Exercise | Sales Tax Calculator | 120      | [exercise-sales-tax-calculator.md](exercises/SalesTax/exercise-sales-tax-calculator.md) |        |
|          | **Learner Hours**    | **3.50** |                                                              |        |

### Activity: Is it a Vowel?

This is a simple switch statement. The trick is to learn to use the `ToUpper()` and `ToLower()` methods on the string type so you don't have to double up comparisons.

**Stretch Goals:** How would you handle foreign vowels such as ä?

### Exercise: HTTP Status Codes

This is a long but straightforward exercise for a switch statement. However, it forces them to read the documentation on HTTP status codes, which will help them be more prepared for web development.

**Stretch Goals:** Demonstrate how to open the browser developer tools and review the status codes returned while browsing.

### Exercise: Sales Tax Calculator

For advanced students, this activity may not take up all of their time. The important thing is to reinforce the formatting.

**Stretch Goals:** Anyone who finishes early can be given other read/write scenarios, such as gas mileage or progressive taxes.

## Day 5

| Type     | Title                | Time     | Markdown Link                                                |
| -------- | -------------------- | -------- | ------------------------------------------------------------ |
| Solution | Sales Tax Calculator | -        | [solution-sales-tax-calculator.md](exercises/SalesTax/solution-sales-tax-calculator.md) |
| Exercise | Area Calculator      | 180      | [exercise-area-calculator.md](exercises/AreaCalculator/exercise-area-calculator.md) |
| Solution | Area Calculator      | -        | [solution-area-calculator.md](exercises/AreaCalculator/solution-area-calculator.md) |
| Quiz     | Week 1 Quiz          | 15       | [quiz-week-1](knowledge-checks/quiz-week-1.md)               |
|          | **Learner Hours**    | **3.25** |                                                              |

### Solution: Sales Tax Calculator

It is up to the instructor to release the solution code to the students. 

**Stretch Goals:** After comparing their code to the solution, students may revise any code that could be done cleaner or correct any potential mistakes.

### Exercise: Area Calculator

This project continues to reinforce validating user input, parsing, and formatted output.

**Stretch Goals:** Add more shapes.

### Solution: Area Calculator

It is up to the instructor to release the solution code to the students. 

**Stretch Goals:**  After comparing their code to the solution, students may revise any code that could be done cleaner or correct any potential mistakes.

### Quiz: Week 1 Quiz

The quiz will cover terms and terminology and small code snippets / expected output.

**Stretch Goals**: None
