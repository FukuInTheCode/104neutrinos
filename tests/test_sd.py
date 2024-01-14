import math
import sys


def calculate_quadratic_mean(numbers):
    return math.sqrt(sum(x**2 for x in numbers) / len(numbers))


def calculate_harmonic_mean(numbers):
    return len(numbers) / sum(1 / x for x in numbers)


def calculate_arithmetic_mean(numbers):
    return sum(numbers) / len(numbers)


def calculate_standard_deviation(numbers):
    mean = calculate_arithmetic_mean(numbers)
    variance = sum((x - mean) ** 2 for x in numbers) / len(numbers)
    return math.sqrt(variance)


def main():
    if len(sys.argv) < 2:
        print("Usage: python script.py <first_number>")
        return
    try:
        first_number = float(sys.argv[1])
    except ValueError:
        print("Invalid input for the first number.")
        return

    numbers = [first_number]
    num_values = len(numbers)
    std_deviation = calculate_standard_deviation(numbers)
    arithmetic_mean = calculate_arithmetic_mean(numbers)
    quad_mean = calculate_quadratic_mean(numbers)
    harmonic_mean = calculate_harmonic_mean(numbers)
    print(f"Number of values: {num_values}")
    print(f"Standard deviation: {std_deviation:.2f}")
    print(f"Arithmetic mean: {arithmetic_mean:.2f}")
    print(f"Root mean square: {quad_mean:.2f}")
    print(f"Harmonic mean: {harmonic_mean:.2f}")

    while True:
        try:
            value = float(input("Enter a number (or any non-number to exit): "))
            numbers.append(value)
        except ValueError:
            break
        num_values = len(numbers)
        std_deviation = calculate_standard_deviation(numbers)
        arithmetic_mean = calculate_arithmetic_mean(numbers)
        quad_mean = calculate_quadratic_mean(numbers)
        harmonic_mean = calculate_harmonic_mean(numbers)
        print(f"Number of values: {num_values}")
        print(f"Standard deviation: {std_deviation:.2f}")
        print(f"Arithmetic mean: {arithmetic_mean:.2f}")
        print(f"Root mean square: {quad_mean:.2f}")
        print(f"Harmonic mean: {harmonic_mean:.2f}")
        print("tom est beau :)")

    if not numbers:
        print("No numbers entered. Exiting.")
        return


if __name__ == "__main__":
    main()
