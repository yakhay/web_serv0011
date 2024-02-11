
#!/usr/bin/env python3

# Import necessary CGI modules
import cgi

# Define a function to handle the CGI request
def main():
    # Set the content type to HTML
    print("Content-type: text/html\n")
    
    # Start the HTML output
    print("<html>")
    print("<head>")
    print("<title>CGI Script</title>")
    print("</head>")
    print("<body>")
    
    # Process the form data if it exists
    form = cgi.FieldStorage()
    if "name" in form:
        name = form["name"].value
        print("<h1>Hello, {}!</h1>".format(name))
    else:
        print("<h1>Hello, World!</h1>")
    
    # Print a simple form
    print("<form method='post'>")
    print("<label for='name'>Enter your name:</label>")
    print("<input type='text' name='name'>")
    print("<input type='submit' value='Submit'>")
    print("</form>")
    
    # End the HTML output
    print("</body>")
    print("</html>")

# Call the main function to handle the CGI request
if __name__ == "__main__":
    main()
