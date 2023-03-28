import random
import string

PASSWORD_LENGTH = 10


def generate_password(length):
    """
    Generate a random password of the given length.

    Args:
        length: An integer specifying the length of the password.

    Returns:
        A string containing a random password.
    """
    charset = string.ascii_letters + string.digits
    password = ''.join(random.choice(charset) for i in range(length))
    return password


if __name__ == '__main__':
    password = generate_password(PASSWORD_LENGTH)
    print(password)
