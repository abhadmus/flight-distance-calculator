# Flight Time Calculator

This C program calculates estimated flight durations (in hours and minutes) for a given range of distances in kilometers. It converts the distance to miles and estimates the time based on an average flight speed of 529 miles per hour.

## Features

- Takes lower and upper limits of distance (in kilometers) from the user
- Asks for a step size to generate a range
- Converts each distance to miles
- Estimates travel time in hours and minutes
- Displays results in a neatly formatted table

## Input

The program prompts for three values:

1. **Lower limit** of distance (in km)
2. **Upper limit** of distance (in km)
3. **Step size** (in km)

**Example:**
```
Enter the lower limit on distance in km: 100
Enter the upper limit on distance in km: 500
Enter the step size in km: 100
```

## Output

The output is a table with columns for:

- Distance (km)
- Estimated time in hours
- Estimated time in minutes (rounded)

**Sample Output:**
```
===============================================
| distance (km) |    hours    |    minutes    |
|=============================================|
|     100.00     |      0      |       7       |
|     200.00     |      0      |      14       |
|     300.00     |      0      |      21       |
|     400.00     |      0      |      28       |
===============================================
```

## Validation

If the step size is invalid (e.g. negative, or step makes it exceed the upper limit), the program prints:
```
Invalid values given. Table cannot be generated.
```

## How It Works

1. **Distance Conversion**: km → miles using:
   ```
   miles = km * 0.621371
   ```
2. **Time Estimation**:
   ```
   time_hours = miles / 529
   ```
   Time is split into integer hours and rounded minutes.
3. **Output Formatting**: Ensures aligned columns based on value size.

## Dependencies

- Standard C libraries:
  - `stdio.h`
  - `stdlib.h`
  - `math.h`

No third-party libraries required.

## Compilation & Running

To compile and run the program:

```bash
gcc flight_time.c -o flight_time -lm
./flight_time
```