from flask import Flask, jsonify, send_from_directory
import random # Simulate random BPM data (Fake data for testing)

app = Flask(__name__, static_folder='static_website') # Create a Flask app

# Serve index.html from /static_website
@app.route('/') # Serve the website
def serve_index():
    return send_from_directory(app.static_folder, 'index.html')

# Function name: get_bpm()
# Purpose: To simulate the retrieval of heart rate data (BPM) from a device or database.
@app.route('/bpm') # Serve the BPM data
def get_bpm(): 
    bpm = random.randint(60, 100)
    return jsonify({'bpm': bpm})

if __name__ == '__main__':
    app.run(debug=True)